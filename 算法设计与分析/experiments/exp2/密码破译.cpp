#include <bits/stdc++.h>
using namespace std;

const int MAXN = 131100;
char s[MAXN];
int n;

int solve(int l, int r, char c)
{
    if (r - l == 1) return s[l] != c;
    int mid = (l + r) / 2;
    int cntl = solve(l, mid, c + 1) + r - mid - count(s + mid, s + r, c);
    int cntr = solve(mid, r, c + 1) + mid - l - count(s + l, s + mid, c);
    return min(cntl, cntr);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        cout << solve(0, n, 'a') << endl;
    }
    return 0;
}