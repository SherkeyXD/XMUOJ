#include <bits/stdc++.h>
using namespace std;

const int SIZE = 41;

int main()
{
    int n, m, steps[SIZE] = {};
    steps[0] = 0;
    steps[1] = 1;
    steps[2] = 2;

    for (int i = 3; i < SIZE; i++)
        steps[i] = steps[i - 1] + steps[i - 2];

    cin >> n;
    while (n--)
    {
        cin >> m;
        cout << steps[m] << endl;
    }

    return 0;
}
