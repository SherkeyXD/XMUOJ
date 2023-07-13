#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int f[25];
    f[0] = 1;
    f[1] = 3;
    f[2] = 7;
    for (int i = 3; i <= 20; i++)
        f[i] = f[i - 1] * 2 + f[i - 2];

    int n;
    cin >> n;
    cout << f[n] << endl;

    return 0;
}
