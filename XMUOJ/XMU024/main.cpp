#include <bits/stdc++.h>
using namespace std;

// Ref: https://blog.csdn.net/matafeiyanll/article/details/105855491

typedef pair<int, int> PII;
queue<PII> q;

const int N = 1010;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
char g[N][N];
int d[N][N], n, m;

void Build(int n, int m)
{
    memset(d, -1, sizeof(d));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            char c = getchar();
            while (c != '0' and c != '1')
            {
                c = getchar();
            }
            if (c == '1')
            {
                d[i][j] = 0;
                q.push(make_pair(i, j));
            }
        }
}

void bfs()
{
    while (q.size())
    {
        auto t = q.front();
        q.pop();

        int x = t.first, y = t.second;
        for (int i = 0; i < 4; i++)
        {
            int a = x + dx[i], b = y + dy[i];
            if (a >= 0 and a < n and b >= 0 and b < m and d[a][b] == -1)
            { // 判断是否合法
                d[a][b] = d[x][y] + 1;
                q.push(make_pair(a, b));
            }
        }
    }
}

void Print(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << d[i][j] << ' ';
        cout << endl;
    }
}

int main()
{
    cin >> n >> m;
    Build(n, m);
    bfs();
    Print(n, m);
    return 0;
}
