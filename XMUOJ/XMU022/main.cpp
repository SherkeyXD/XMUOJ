#include <bits/stdc++.h>
using namespace std;

// Ref: https://blog.csdn.net/matafeiyanll/article/details/105679887

struct Point
{
    int r, c;
};

struct Node
{
    int col, row;
    int count;
};

int Column, Row, Maxcount = 0, cnt = 0;
Point dir[8] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
queue<Node> Q;

bool BFS(char **Board, bool **visited)
{
    while (!Q.empty())
    {
        Node n = Q.front();
        Q.pop();
        for (int i = 0; i < 8; i++)
        {
            int col = n.col + dir[i].c;
            int row = n.row + dir[i].r;
            if (col >= 1 and col <= Column and row >= 1 and row <= Row and visited[col][row] == false and Board[col][row] != '*')
            {
                Node p;
                cnt--;
                p.col = col;
                p.row = row;
                p.count = n.count + 1;
                visited[col][row] = true;
                Q.push(p);
                if (p.count > Maxcount) Maxcount = p.count;
                if (cnt == 0) return true;
            }
        }
    }
    return false;
}

int main()
{
    int begincol, beginrow;
    cin >> Row >> Column;
    cin >> beginrow >> begincol;
    char **Board = new char *[Column + 1];
    for (int i = 1; i <= Column; ++i)
    {
        Board[i] = new char[Row + 1]();
    }
    bool **visited = new bool *[Column + 1];
    for (int i = 1; i <= Column; ++i)
    {
        visited[i] = new bool[Row + 1]();
    }
    memset(visited, false, sizeof(visited));

    for (int i = 1; i <= Column; i++)
        for (int j = 1; j <= Row; j++)
        {
            cin >> Board[i][j];
            if (Board[i][j] == '.')
                cnt++;
        }

    Node n;
    n.col = Column - begincol + 1;
    n.row = beginrow;
    n.count = 0;
    visited[Column - begincol + 1][beginrow] = true;
    if (Board[Column - begincol + 1][beginrow] == '.')
        cnt--;
    Q.push(n);
    int count = BFS(Board, visited);
    cout << Maxcount;
    return 0;
}
