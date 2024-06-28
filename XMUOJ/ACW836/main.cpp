#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int p[N];

int find(int x)
{
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        p[i] = i;

    while (m--)
    {
        string op;
        int a, b;
        cin >> op >> a >> b;
        if (op == "M")
        {
            p[find(a)] = find(b);
        }
        else if (op == "Q")
        {
            if (find(a) == find(b))
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}