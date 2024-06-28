#include <bits/stdc++.h>
using namespace std;

vector<int> x, y;
char graph[4][4];
int n, maximun = 0;

bool check(int x1, int y1)
{
    for (int i = 0; i < x.size(); i++)
    {
        if (x1 == x[i])
        {
            bool flag = false;
            for (int j = min(y1, y[i]) + 1; j < max(y1, y[i]); j++)
                if (graph[x1][j] == 'X') flag = true;
            if (!flag) return flag;
        }
        if (y1 == y[i])
        {
            bool flag = false;
            for (int j = min(x1, x[i]) + 1; j < max(x1, x[i]); j++)
                if (graph[y1][j] == 'X') flag = true;
            if (!flag) return flag;
        }
    }
    return true;
}

void restore(int row)
{
    for (int i = x.size() - 1; i >= 0; i--)
    {
        if (x[i] == row)
        {
            x.erase(x.begin() + i);
            y.erase(y.begin() + i);
        }
    }
}

void seek(int row)
{
    if (row == n)
    {
        int k = x.size();
        maximun = max(maximun, k);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (graph[row][i] == '.' and check(row, i))
        {
            x.push_back(row);
            y.push_back(i);
            for (int j = 0; j < n; j++)
                if (graph[row][j] == '.' and check(row, j) and j != i)
                {
                    x.push_back(row);
                    y.push_back(j);
                }
            seek(row + 1);
            restore(row);
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    seek(0);

    cout << maximun;

    return 0;
}