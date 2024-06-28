#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n, op;
    stack<pair<int, int>> stack; // start:end

    cin >> n;
    while (n--)
    {
        cin >> op;
        if (op == 1)
        {
            int l, r;
            cin >> l >> r;
            stack.push({l, r});
        }
        else if (op == 2)
        {
            ull k, length, tmp, cost = 0;
            cin >> k;
            int l, r;
            tie(l, r) = stack.top();
            while (k > r - l + 1)
            {
                length = r - l + 1;
                tmp = (l + r) * length / 2;
                cost += tmp;
                stack.pop();
                k -= r - l + 1;
                tie(l, r) = stack.top();
            }
            cost += k * (r - k + 1 + r) / 2;
            tie(l, r) = stack.top();
            stack.pop();
            stack.push({l, r - k});
            cout << cost << endl;
        }
    }

    return 0;
}