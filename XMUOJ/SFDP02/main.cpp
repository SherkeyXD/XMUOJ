#include <bits/stdc++.h>
using namespace std;

const int MAX = 1002;
const int INF = 1e9;

int x[MAX] = {0}, y[MAX] = {0};
int dp[MAX][MAX] = {0};

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];

    for (int len = 2; len <= n; len++)
        for (int i = 1; i <= n - len + 1; i++)
        {
            int j = i + len - 1;
            dp[i][j] = INF;
            for (int k = i; k < j; k++)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + x[i]*y[k]*y[j]);
        }

    cout << dp[1][n] << endl;

    return 0;
}