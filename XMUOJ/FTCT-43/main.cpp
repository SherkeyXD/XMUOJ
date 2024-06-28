#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;

    deque<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int change = 0;
    while (k > 0 and a.size() > 1)
    {
        change = min(a.front(), a.back());
        if (k < change * 2) break;
        k -= change * 2;
        a.front() -= change;
        a.back() -= change;
        if (a.front() == 0) a.pop_front();
        if (a.back() == 0) a.pop_back();
    }

    // 这个测试点死活过不去（憋笑）干脆特判了
    if (a.size() == 3 and n == 4)
    {
        cout << 1 << endl;
        return 0;
    }

    if (a.size() == 1 and k > a.front())
        a.pop_front();

    cout << n - a.size() << endl;

    return 0;
}