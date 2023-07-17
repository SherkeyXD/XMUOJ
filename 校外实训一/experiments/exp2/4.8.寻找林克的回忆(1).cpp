#include <bits/stdc++.h>
using namespace std;

const int N = 9;
int a[N][N];

bool check(int x, int y, int val)
{
    for (int i = 0; i < N; i++)
    {
        if (a[x][i] == val) return false;
        if (a[i][y] == val) return false;
    }
    int row = x / 3 * 3, col = y / 3 * 3;
    for (int i = row; i < row + 3; i++)
        for (int j = col; j < col + 3; j++)
            if (a[i][j] == val)
                return false;
    return true;
}

bool solve(int x, int y)
{
    if (x == N) return true;
    if (y == N) return solve(x + 1, 0);
    if (a[x][y] != 0) return solve(x, y + 1);
    for (int i = 1; i <= N; i++)
        if (check(x, y, i))
        {
            a[x][y] = i;
            if (solve(x, y + 1)) return true;
            a[x][y] = 0;
        }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string tmp;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        for (int j = 0; j < N; j++)
            a[i][j] = tmp[j] - '0';
    }

    solve(0, 0);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) 
            cout << a[i][j];
        cout << endl;
    }

    return 0;
}