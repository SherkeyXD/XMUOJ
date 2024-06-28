#include <bits/stdc++.h>
using namespace std;

const int MAXN = 205;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};
int n, m, matrix[MAXN][MAXN], dp[MAXN][MAXN];

int dfs(int x, int y)
{
    if (dp[x][y])
        return dp[x][y];
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 1 and nx <= n and ny >= 1 and ny <= m and matrix[nx][ny] > matrix[x][y])
            dp[x][y] = max(dp[x][y], dfs(nx, ny));
    }
    return ++dp[x][y];
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> matrix[i][j];

    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            ans = max(ans, dfs(i, j));

    cout << ans << endl;

    return 0;
}