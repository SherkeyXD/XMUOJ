#include <bits/stdc++.h>
using namespace std;

// Ref: https://zhuanlan.zhihu.com/p/422113979

typedef pair<int, int> P;
const int N = 25;
char q[N][N];
int sx, sy;
int n, m;

int bfs()
{
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    queue<P> que;
    que.push(make_pair(sx, sy));
    q[sx][sy] = '#';
    int res = 0;
    while (que.size())
    {
        P p = que.front();
        que.pop();
        res++;
        for (int i = 0; i < 4; i++)
        {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && q[nx][ny] == '.')
            {
                que.push(make_pair(nx, ny));
                q[nx][ny] = '#';
            }
        }
    }
    return res;
}

int main()
{
    while (cin >> m >> n, n || m)
    {
        for (int i = 0; i < n; i++)
            cin >> q[i];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (q[i][j] == '@')
                {
                    sx = i;
                    sy = j;
                }
            }
        cout << bfs() << endl;
    }
    return 0;
}