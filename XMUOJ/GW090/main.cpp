#include <bits/stdc++.h>
using namespace std;

// Ref: https://blog.csdn.net/matafeiyanll/article/details/105248352

int maze[60][60], M, N;
int book[60][60];
int roomnum = 0, maxroom = 0, room;

void dfs(int x, int y)
{
    if (book[x][y])
        return;
    room++;
    book[x][y] = 1;
    if (!(maze[x][y] & 1))
        dfs(x, y - 1);
    if (!(maze[x][y] & 2))
        dfs(x - 1, y);
    if (!(maze[x][y] & 4))
        dfs(x, y + 1);
    if (!(maze[x][y] & 8))
        dfs(x + 1, y);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    memset(book, 0, sizeof(book));

    cin >> M >> N;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            cin >> maze[i][j];

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (!book[i][j])
            {
                room = 0;
                roomnum++;
                dfs(i, j);
                maxroom = max(maxroom, room);
            }
    cout << roomnum << endl << maxroom << endl;
    
    return 0;
}
