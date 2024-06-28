#include <bits/stdc++.h>
using namespace std;

// Answer Start
int lowbit(int n)
{
    return n & (-n);
}

int NumberOf1(int n)
{
    int res = 0;
    while (n)
    {
        n -= lowbit(n);
        res++;
    }
    return res;
}
// Answer Ends

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << NumberOf1(n) << endl;

    return 0;
}
