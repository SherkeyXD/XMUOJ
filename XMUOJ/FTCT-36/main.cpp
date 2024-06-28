#include <bits/stdc++.h>
using namespace std;

int main()
{
    int days, kinds;
    cin >> days >> kinds;

    int times[days+1];
    for (int i = 1; i <= days; i++)
        cin >> times[i];

    int periods[kinds+1], cost[kinds+1];
    for (int i = 1; i <= kinds; i++)
        cin >> periods[i] >> cost[i];

    int m0;
    cin >> m0;

    int dp[days+1];
    memset(dp, 0x3f, sizeof(dp));
    dp[0] = 0;

    for (int i = 1; i <= days; i++)
    {
        dp[i] = min(dp[i], dp[i-1] + m0 * times[i]);
        for (int j = 1; j <= kinds; j++)
            if (i >= periods[j])
                dp[i] = min(dp[i], dp[i-periods[j]] + cost[j]);
    }

    cout << dp[days] << endl;

    return 0;
}