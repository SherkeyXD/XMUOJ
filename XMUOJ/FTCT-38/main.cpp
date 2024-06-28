#include <bits/stdc++.h>
using namespace std;

int w[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> dp(n+1, INT_MIN);
    dp[0] = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = w[i]; j <= n; j++) {
            dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
        }
    }

    cout << dp[n] << endl;

    return 0;
}