#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, u, v, ans = 0;
    cin >> n >> m;
    vector<vector<int>> to(n + 1);
    vector<int> vis(n + 1);
    for (int i = 1; i <= m; ++i)
    {
        cin >> u >> v;
        to[u].push_back(v);
        to[v].push_back(u);
    }
    for (int i = 1; i <= n; ++i)
    {
        if (vis[i])
            continue;
        vis[i] = 1;
        int cnt1 = 1, cnt2 = 0;
        bool flag1 = true, flag2 = true;
        map<int, int> col;
        function<void(int, bool &, int &)> dfs = [&](int u, bool &flag, int &cnt)
        {
            for (auto v : to[u])
            {
                vis[v] = 1;
                if (col[v])
                {
                    if (col[v] == 1 and col[u] == 1 or col[v] == 2 and col[u] == 2)
                        flag = false;
                }
                else
                {
                    if (col[u] == 1)
                    {
                        col[v] = 2;
                        dfs(v, flag, cnt);
                    }
                    else if (col[u] == 2)
                    {
                        col[v] = 1;
                        ++cnt;
                        dfs(v, flag, cnt);
                    }
                }
            }
        };
        col[i] = 1;
        dfs(i, flag1, cnt1);
        col.clear();
        col[i] = 2;
        dfs(i, flag2, cnt2);
        if (!flag1 and !flag2)
        {
            cout << "Impossible" << endl;
            return;
        }
        else if (!flag1) ans += cnt2;
        else if (!flag2) ans += cnt1;
        else ans += min(cnt1, cnt2);
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}