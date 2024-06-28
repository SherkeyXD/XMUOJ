#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
int v[N] = {0}, w[N] = {0}, f[N] = {0};

int main()
{
    int N, V;
    cin >> N >> V;

    for (int i = 1; i <= N; i++)
        cin >> v[i] >> w[i];

    for (int i = 1; i <= N; i++)
        for (int j = V; j >= v[i]; j--)
            f[j] = max(f[j], f[j - v[i]] + w[i]);

    cout << f[V] << endl;

    return 0;
}