#include <bits/stdc++.h>
using namespace std;

const int MAX = 1005;

int main()
{
    int matrix[MAX][MAX] = {0};
    int n, m, q, tmp;
    cin >> n >> m >> q;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> tmp;
            matrix[i][j] = matrix[i][j - 1] + tmp;
        }
    }
    
    while(q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int sum = 0;
        for (int i = x1; i <= x2; i++)
            sum += matrix[i][y2] - matrix[i][y1 - 1];
        cout << sum << endl;
    }

    return 0;
}
