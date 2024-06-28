#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1 << 15;
const int INF = 1e9;

int main()
{
    int T, n;
    cin >> T >> n;

    vector<int> cost(T), elements(T);
    for (int i = 0; i < T; i++)
    {
        cin >> cost[i];
        string s;
        cin >> s;
        for (char c : s)
            elements[i] |= 1 << (c - 'A');
    }

    vector<int> dp(MAXN, INF);
    dp[0] = 0;

    for (int i = 0; i < T; i++)
        for (int j = 0; j < MAXN; j++)
            dp[j | elements[i]] = min(dp[j | elements[i]], dp[j] + cost[i]);

    int target = (1 << n) - 1;
    if (dp[target] == INF)
        cout << -1 << endl;
    else
        cout << dp[target] << endl;

    return 0;
}