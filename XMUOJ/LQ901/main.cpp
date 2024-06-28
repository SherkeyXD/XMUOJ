#include <bits/stdc++.h>
#define N 10
using namespace std;

int n;
int map_Q[N][N];
int posb[N] = {0};
int posw[N] = {0};
int tot = 0;

bool checkw(int cur)
{
    for (int i = 1; i < cur; i++)
        if (posw[i] == posw[cur] or abs(i - cur) == abs(posw[i] - posw[cur]))
            return false;
    return true;
}

bool checkb(int cur)
{
    for (int i = 1; i < cur; i++)
        if (posb[i] == posb[cur] or abs(i - cur) == abs(posb[i] - posb[cur]))
            return false;
    return true;
}

void dfs_white(int cur)
{
    if (cur == n + 1) tot++;
    for (int i = 1; i <= n; i++)
    {
        if (posb[cur] == i) continue;
        if (map_Q[cur][i] == 0) continue;
        posw[cur] = i;
        if (checkw(cur)) dfs_white(cur + 1);
    }
}

void dfs_black(int cur)
{
    if (cur == n + 1) dfs_white(1);
    for (int i = 1; i <= n; i++)
    {
        if (map_Q[cur][i] == 0) continue;
        posb[cur] = i;
        if (checkb(cur)) dfs_black(cur + 1);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> map_Q[i][j];

    dfs_black(1);

    cout << tot << endl;

    return 0;
}