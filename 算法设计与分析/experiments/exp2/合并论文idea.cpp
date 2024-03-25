#include <bits/stdc++.h>
using namespace std;

const int P = 12345;

int main()
{
    int n;
    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        pq.push(x);
    }

    long long res = 0;
    while (pq.size() > 1)
    {
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();
        res = (res + a * b % P) % P;
        pq.push(a + b);
    }

    cout << res << endl;

    return 0;
}