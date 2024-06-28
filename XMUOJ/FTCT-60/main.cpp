#include <bits/stdc++.h>
using namespace std;

void GordenGhost()
{
    long long n, pa, pb, cnta = 0, cntb = 0;
    cin >> n >> pa >> pb;
    deque<long long> a, b;
    for (int i = 1; i <= n; ++i)
    {
        int al;
        cin >> al;
        if (al == -1) cnta++;
        else a.push_back(al);
    }
    for (int i = 1; i <= n; ++i)
    {
        int bl;
        cin >> bl;
        if (bl == -1) cntb++;
        else b.push_back(bl);
    }
    sort(a.begin(), a.end(), greater<>());
    sort(b.begin(), b.end());
    for (int i = 0; i < min(a.size(), b.size()); ++i)
    {
        if (i < a.size()) pb -= a[i];
        if (i < b.size()) pa -= b[i];
        if (pa <= 0 and pb <= 0)
        {
            cout << "Bad Yukari!" << endl;
            return;
        }
        else if (pa <= 0)
        {
            cout << "Bad Yukari!" << endl;
            return;
        }
        else if (pb <= 0)
        {
            cout << "Chen!" << endl;
            return;
        }
    }
    cout << "Bad Yukari!" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    GordenGhost();

    return 0;
}