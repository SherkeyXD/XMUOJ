#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    vector<vector<int>> dp(n + 1, vector<int>(1 << m, -1));
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 0; j < (1 << m); j++)
            for (int k = 0; k < (1 << m); k++)
            {
                if ((j & k) == j)
                {
                    int newSelect = j ^ k, newTotal = 0;
                    if (newSelect == 0)
                    {
                        dp[i][k] = max(dp[i][k], dp[i - 1][j]);
                        continue;
                    }
                    for (int x = 0; x < m; x++) if ((newSelect >> x) & 1) newTotal += b[x];
                    if (newTotal == a[i]) dp[i][k] = max(dp[i][k], dp[i - 1][j] + 1);
                }
            }

    cout << *max_element(dp[n].begin(), dp[n].end()) << endl;
    return 0;
}