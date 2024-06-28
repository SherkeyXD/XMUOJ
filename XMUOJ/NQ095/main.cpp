#include <bits/stdc++.h>
using namespace std;

const int N = 9;

int origin[N][N] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
};

bool check(int x, int y, int val)
{
    for (int i = 0; i < 9; i++)
    {
        if (origin[x][i] == val) return false;
        if (origin[i][y] == val) return false;
    }
    int row = x / 3 * 3, col = y / 3 * 3;
    for (int i = row; i < row + 3; i++)
        for (int j = col; j < col + 3; j++)
            if (origin[i][j] == val)
                return false;
    return true;
}

bool solve(int x, int y)
{
    if (x == N) return true;
    if (y == N) return solve(x + 1, 0);
    if (origin[x][y] != 0) return solve(x, y + 1);
    for (int i = 1; i <= N; i++)
        if (check(x, y, i))
        {
            origin[x][y] = i;
            if (solve(x, y + 1)) return true;
            origin[x][y] = 0;
        }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<string> input(9);
    for (int i = 0; i < 9; i++) 
        cin >> input[i];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) 
            if (input[i][j] - '0' != origin[i][j] and origin[i][j] != 0) 
            {
                cout << "No" << endl;
                return 0;
            }
            else if (input[i][j] != '0') 
                origin[i][j] = input[i][j] - '0';

    cout << (solve(0, 0) ? "Yes" : "No") << endl;

    return 0;
}