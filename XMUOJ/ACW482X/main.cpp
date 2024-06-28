#include <bits/stdc++.h>
using namespace std;

const int MAXN = 110;
int h[MAXN], dp1[MAXN], dp2[MAXN];

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> h[i];

    for (int i = 1; i <= N; i++)
    {
        dp1[i] = 1;
        for (int j = 1; j < i; j++)
            if (h[i] > h[j])
                dp1[i] = max(dp1[i], dp1[j] + 1);
    }

    for (int i = N; i >= 1; i--)
    {
        dp2[i] = 1;
        for (int j = N; j > i; j--)
            if (h[i] > h[j])
                dp2[i] = max(dp2[i], dp2[j] + 1);
    }

    int ans = 0;
    for (int i = 1; i <= N; i++)
        ans = max(ans, dp1[i] + dp2[i] - 1);

    cout << N - ans << endl;

    return 0;
}