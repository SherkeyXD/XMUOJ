#include <bits/stdc++.h>
using namespace std;

const int N = 65537;

int lowbit(int n)
{
    return n & (-n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int log2[N] = {0};
    for (int i = 1; i < N; i++)
        log2[i] = log2[i / 2] + 1;

    int n;
    cin >> n;
    cout << log2[lowbit(n)]-1 << endl;

    return 0;
}
