#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a(105), b(105);
vector<vector<int>> f(105, vector<int>(105));

inline bool check(int mid)
{
    f[0][0] = 0;
    for (int i = 1; i <= m; ++i)  f[0][i] = -1e9;
    for (int i = 1; i <= n; ++i)
        for (int j = m; j >= 0; --j)
        {
            f[i][j] = -1e9;
            for (int k = max(0, j - mid / a[i]); k <= j; ++k)
                f[i][j] = max(f[i][j], f[i - 1][k] + (mid - a[i] * (j - k)) / b[i]);
        }
    return f[n][m] >= m;
}

int main()
{
    cin >> n >> m;
    int mx = 1;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i] >> b[i];
        mx = max(mx, max(a[i], b[i]));
    }
    int l = 1, r = 2 * m * mx, res = 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << res << endl;
    return 0;
}