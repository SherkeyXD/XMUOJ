#include <bits/stdc++.h>
using namespace std;

const int N = 1010, mod = 1e9 + 7;

int n, m;
long long f[N][2];

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    while (cin >> n >> m)
    {
        f[1][0] = m;
        f[1][1] = 0;
        for (int i = 2; i <= n; i++)
        {
            f[i][0] = (f[i - 1][0]  + f[i - 1][1]) * (m - 1) % mod;
            f[i][1] = f[i - 1][0];
        }
        int ans = (f[n][0] + f[n][1]) % mod;
        cout << ans << endl;
    }
    return 0;
}