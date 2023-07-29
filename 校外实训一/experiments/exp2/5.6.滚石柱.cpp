#include <bits/stdc++.h>
using namespace std;

// Ref: https://www.bilibili.com/video/BV1oK411V7GF/

struct Stone
{
    int x, y, status;
    Stone(int a, int b, int c) { x = a, y = b, status = c; };
    Stone() : x(0), y(0), status(0){};
};

int direction[4][3][3] = {
    {{-2, 0, 2}, {-1, 0, 1}, {-1, 0, 0}},
    {{1, 0, 2}, {1, 0, 1}, {2, 0, 0}},
    {{0, -2, 1}, {0, -1, 0}, {0, -1, 2}},
    {{0, 1, 1}, {0, 2, 0}, {0, 1, 2}}
};

const int N = 510;
int n, m;
char area[N][N];
int dist[N][N][3];

queue<Stone> q;
Stone start, target, qHead;

Stone moveStone(Stone &stone, int udlf)
{
    Stone newStone;
    newStone.x = stone.x + direction[udlf][stone.status][0];
    newStone.y = stone.y + direction[udlf][stone.status][1];
    newStone.status = direction[udlf][stone.status][2];
    return newStone;
}

bool isVisited(Stone stone)
{
    return dist[stone.x][stone.y][stone.status] != -1;
}

bool isInside(int x, int y)
{
    return x >= 0 and x < n and y >= 0 and y < m;
}

bool isValid(Stone stone)
{
    if (!isInside(stone.x, stone.y) or area[stone.x][stone.y] == '#')
        return false;
    if (stone.status == 2 and (!isInside(stone.x + 1, stone.y) or area[stone.x + 1][stone.y] == '#'))
        return false;
    if (stone.status == 1 and (!isInside(stone.x, stone.y + 1) or area[stone.x][stone.y + 1] == '#'))
        return false;
    if (stone.status == 0 and area[stone.x][stone.y] == 'E')
        return false;
    return true;
}

void BuildMap(int n, int m)
{
    memset(area, '#', sizeof(area));
    memset(dist, -1, sizeof(dist));

    for (int i = 0; i < n; i++)
        cin >> area[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (area[i][j] == 'X')
            {
                start.x = i, start.y = j, start.status = 0, area[i][j] = '.';
                if (isInside(i, j + 1) and area[i][j + 1] == 'X')
                    start.status = 1, area[i][j + 1] = '.';
                if (isInside(i + 1, j) and area[i + 1][j] == 'X')
                    start.status = 2, area[i + 1][j] = '.';
            }
            if (area[i][j] == 'O')
                target.x = i, target.y = j, target.status = 0;
        }
}

int bfs(Stone &s)
{
    while (q.size())
        q.pop();
    q.push(s);
    dist[s.x][s.y][s.status] = 0;

    while (q.size())
    {
        qHead = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            Stone newStone = moveStone(qHead, i);
            if (!isValid(newStone))
                continue;
            if (!isVisited(newStone))
            {
                dist[newStone.x][newStone.y][newStone.status] = dist[qHead.x][qHead.y][qHead.status] + 1;
                q.push(newStone);
                if (newStone.x == target.x and newStone.y == target.y and newStone.status == target.status)
                    return dist[newStone.x][newStone.y][newStone.status];
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

    while (cin >> n >> m and n)
    {
        BuildMap(n, m);
        int res = bfs(start);
        if (res == -1)
            cout << "Impossible" << endl;
        else
            cout << res << endl;
    }

    return 0;
}