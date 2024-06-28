#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
const unsigned long long INF = 0;

unsigned long long a[N], n, max1 = INF, max2 = INF, tot1, tot2, ans = UINT64_MAX;
unsigned long long cnt1[N], cnt2[N];
bool overflow = false;

void gx(unsigned long long x)
{
    if (x == max1) tot1++;
    else if (x == max2) tot2++;
    else if (x > max1)
    {
        swap(max1, max2);
        swap(tot1, tot2);
        max1 = x;
        tot1 = 1;
    }
    else if (x > max2)
    {
        tot2 = 1;
        max2 = x;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == INT64_MAX) overflow = true;
        gx(a[i]);
    }

    for (int i = 1; i <= n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        if (a[x] == max1) cnt1[y]++;
        if (a[y] == max1) cnt1[x]++;
        if (a[x] == max2) cnt2[y]++;
        if (a[y] == max2) cnt2[x]++;
    }

    for (int i = 1; i <= n; i++)
        if (a[i] == max1)
            if (cnt1[i] == tot1 - 1)
                if (tot1 == 1)
                    if (cnt2[i] == tot2) ans = min(ans, max1);
                    else ans = min(ans, max(max1, max2 + 2));
                else ans = min(ans, max1 + 1);
            else ans = min(ans, max1 + 2);
        else if (cnt1[i] == tot1) ans = min(ans, max1 + 1);
        else ans = min(ans, max1 + 2);

    cout << ans << endl;

    return 0;
}