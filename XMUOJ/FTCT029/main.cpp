#include <bits/stdc++.h>
using namespace std;

const int N = 502;
int w[N] = {0};
int v[N] = {0};
int s[N] = {0};

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i] >> s[i];

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            for (int k = 0; k <= s[i] and k * w[i] <= j; k++) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k * w[i]] + k * v[i]);
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}