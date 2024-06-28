#include <bits/stdc++.h>
using namespace std;

const int MAXN = 110;
int v[MAXN], w[MAXN], s[MAXN];
int dp[MAXN];

int main()
{
    int N, V;
    cin >> N >> V;
    for (int i = 1; i <= N; i++)
        cin >> v[i] >> w[i] >> s[i];

    for (int i = 1; i <= N; i++)
        for (int j = V; j >= 0; j--)
            for (int k = 0; k <= s[i] and k * v[i] <= j; k++)
                dp[j] = max(dp[j], dp[j - k * v[i]] + k * w[i]);

    cout << dp[V] << endl;

    return 0;
}