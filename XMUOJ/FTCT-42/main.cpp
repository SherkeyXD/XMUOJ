#include <bits/stdc++.h>
using namespace std;

unordered_map<int, bool> a, b;
int m, n, k;
bool f = false;

void dfs(int aa, int bb, int pos)
{
    if (f) return;
    if (abs(aa - bb) > k - aa - bb) return;
    if (pos > k)
    {
        if (aa * 2 == k and bb * 2 == k)
        {
            cout << "YES\n";
            f = true;
            return;
        }
        return;
    }
    if (aa < bb)
    {
        if (a[pos]) dfs(aa + 1, bb, pos + 1);
        if (b[pos]) dfs(aa, bb + 1, pos + 1);
    }
    else
    {
        if (b[pos]) dfs(aa, bb + 1, pos + 1);
        if (a[pos]) dfs(aa + 1, bb, pos + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        cin >> m >> n >> k;
        a.clear();
        b.clear();
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            a[x] = true;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[x] = true;
        }
        int able = true;
        for (int i = 1; i <= k; i++)
        {
            if (!a[i] and !b[i])
            {
                able = false;
                break;
            }
        }
        if (!able)
        {
            cout << "NO\n";
            continue;
        }
        dfs(0, 0, 1);
        if (!f)
            cout << "NO\n";
        f = false;
    }

    return 0;
}