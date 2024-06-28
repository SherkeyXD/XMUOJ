#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, q, l, r, tmp;
    cin >> t;

    while (t--)
    {
        cin >> n >> q;

        int a[n + 1] = {0}, b[n + 1] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> tmp;
            a[i] = a[i - 1];
            b[i] = b[i - 1];
            if (tmp == 1)
                a[i]++;
            else
                b[i] += tmp - 1;
        }

        while (q--)
        {
            cin >> l >> r;
            cout << (b[r] - b[l - 1] < a[r] - a[l - 1] or l == r ? "NO" : "YES") << endl;
        }
    }

    return 0;
}