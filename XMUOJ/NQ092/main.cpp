#include <bits/stdc++.h>
using namespace std;

// Ref: https://www.bilibili.com/video/BV14i4y1t72T/

typedef pair<int, int> PII;
PII start, target;
queue<PII> q;

const int N = 1010;
const int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
const int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};
char s[160][160];
int n, m, dist[160][160];

bool check(int x, int y)
{
    return x >= 1 and x <= n and y >= 1 and y <= m and s[x][y] != '*' and dist[x][y] == -1;
}

void FindStartAndTarget()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (s[i][j] == 'K') start = make_pair(i, j);
            if (s[i][j] == 'H') target = make_pair(i, j);
        }
}

int bfs()
{
    memset(dist, -1, sizeof(dist));
    q.push(start);
    dist[start.first][start.second] = 0;
    while (q.size())
    {
        PII pHead = q.front();
        q.pop();
        if (pHead == target) return dist[pHead.first][pHead.second];
        for (int i = 0; i < 8; i++)
        {
            int x = pHead.first + dx[i], y = pHead.second + dy[i];
            if (check(x, y))
            {
                dist[x][y] = dist[pHead.first][pHead.second] + 1;
                q.push(make_pair(x, y));
                if (x == target.first and y == target.second) return dist[x][y];
            }
        }
    }
    return -1;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> m >> n;
    for (int i = 1; i <= n; i++) cin >> (s[i] + 1);
    FindStartAndTarget();
    cout << bfs() << endl;
}
