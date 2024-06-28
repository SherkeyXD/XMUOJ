#include <bits/stdc++.h>
using namespace std;

int n, m;
int cnt = 0, res = 0;
int a[10], b[10], used[10];

void dfs(int s, int i, int j)
{
    if (i >= n)
    {
        if (cnt > res) res = cnt;
        return;
    }
    if (j >= m)
    {
        dfs(a[i + 1], i + 1, 0);
        return;
    }
    if (s > b[j] and !used[j])
    {
        used[j] = 1;
        dfs(s - b[j], i, j + 1);
        used[j] = 0;
        dfs(s, i, j + 1);
    }
    else if (s == b[j] and !used[j])
    {
        used[j] = 1;
        cnt++;
        dfs(a[i + 1], i + 1, 0);
        used[j] = 0;
        cnt--;
        dfs(s, i, j + 1);
    }
    else
        dfs(s, i, j + 1);
    return;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    dfs(a[0], 0, 0);
    cout << res << endl;

    return 0;
}