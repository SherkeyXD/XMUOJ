#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

void solve()
{
    int n, l, r;
    cin >> n;
    vector<pii> arr(n);
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; ++i)
        cin >> arr[i].first >> arr[i].second;
    sort(arr.begin(), arr.end());
    int cur = 1;
    for (auto &vv : arr)
    {
        l = vv.first;
        r = vv.second;
        while (!pq.empty() and cur < l)
        {
            if (pq.top() < cur)
            {
                cout << "No" << endl;
                return;
            }
            ++cur;
            pq.pop();
        }
        cur = l;
        pq.push(r);
    }
    while (!pq.empty() and cur <= pq.top())
    {
        ++cur;
        pq.pop();
    }
    cout << (pq.empty() ? "Yes" : "No") << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) solve();

    return 0;
}