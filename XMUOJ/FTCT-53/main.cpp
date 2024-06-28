#include <bits/stdc++.h>
using namespace std;

const int MAX_NUM = 16;

int num_cards;
int cards[MAX_NUM], count_cards[MAX_NUM];
int mycount[(1 << MAX_NUM)];
bool vis_check[(1 << MAX_NUM)], ok[(1 << MAX_NUM)];

bool check(int S)
{
    bool vis[(1 << MAX_NUM)], ok[(1 << MAX_NUM)];
    if (vis[S] || S == 0) return ok[S];
    vis[S] = true;
    vector<int> arr;
    memset(count_cards, 0, sizeof count_cards);
    for (int i = 0; i < num_cards; i++)
        if (S >> i & 1)
            count_cards[cards[i]]++;
    for (int i = 0; i < 13; i++)
        if (count_cards[i]) arr.push_back(i);
    ok[S] = false;
    if (mycount[S] == 1 || mycount[S] == 2 || mycount[S] == 3)
        ok[S] = (arr.size() == 1);
    else if (mycount[S] == 5)
    {
        if (arr.size() == 5)
        {
            ok[S] = true;
            for (int i = 1; i < 5; i++)
                if (arr[i - 1] + 1 != arr[i])
                    ok[S] = false;
        }
        else if (arr.size() == 2)
            ok[S] = (count_cards[arr[0]] == 3 || count_cards[arr[1]] == 3);
    }
    else if (mycount[S] == 6)
    {
        int n = arr.size();
        if (n == 2 || n == 3)
        {
            ok[S] = true;
            for (int i = 1; i < n; i++)
                if (arr[i - 1] + 1 != arr[i]) ok[S] = false;
            for (int i = 0; i < n; i++)
                if (count_cards[arr[i]] != 6 / n) ok[S] = false;
        }
    }
    return ok[S];
}

long long dp(int S)
{
    if (S == 0) return 1;
    long long f[(1 << MAX_NUM)];
    bool vis[(1 << MAX_NUM)];
    if (vis[S]) return f[S];
    vis[S] = true;
    f[S] = 0;
    for (int nS = S; nS > 0; nS = ((nS - 1) & S))
    {
        if ((nS & (S & -S)) == 0) continue;
        if (check(nS)) f[S] += dp(S ^ nS);
    }
    return f[S];
}

int main()
{
    for (int i = 0; i < 13; i++)
    {
        int count;
        cin >> count;
        while (count--)
            cards[num_cards++] = i;
    }

    for (int i = 0; i < (1 << num_cards); i++)
        mycount[i] = mycount[i >> 1] + (i & 1);

    cout << dp((1 << num_cards) - 1) << endl;

    return 0;
}