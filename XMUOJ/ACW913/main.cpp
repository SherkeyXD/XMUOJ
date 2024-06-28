#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 2;
int t[MAXN];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> t[i];

    sort(t, t + n, less<int>());

    long long ans = 0;
    for (int i = 0; i < n; i++)
        ans += t[i] * (n - i - 1);

    cout << ans << endl;

    return 0;
}