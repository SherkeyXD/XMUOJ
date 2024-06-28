#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll n, cur = 0, ans = 0, aans = 0;
    cin >> n;

    vector<ll> crr(n + 1), xrr(n + 1);
    for (int i = 1; i <= n; ++i) cin >> crr[i] >> xrr[i];
    priority_queue<ll> pq;

    for (int i = 1; i <= n; ++i)
    {
        if (crr[i] <= cur)
        {
            cur -= crr[i];
            ans += 1;
            pq.push(crr[i] + xrr[i]);
        }
        else if (!pq.empty())
        {
            ll tp = pq.top();
            if (tp >= crr[i] + xrr[i])
            {
                pq.pop();
                pq.push(crr[i] + xrr[i]);
                cur += tp - crr[i];
            }
            else cur += xrr[i];
        }
        else cur += xrr[i];
        aans ^= ans;
    }

    cout << aans << endl;

    return 0;
}