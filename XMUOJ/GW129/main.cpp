#include <bits/stdc++.h>
using namespace std;

// Ref: https://www.bilibili.com/video/BV1r64y1v7ot/

const int N = 27;
char forest[N][N];
int dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0};
int w, h;

int dfs(int x, int y)
{
    int res = 1;
    forest[x][y] = '#';
    for (int i = 0; i < 4; i++)
    {
        int new_x = x + dx[i], new_y = y + dy[i];
        if (new_x >= 0 and new_x < h and new_y >= 0 and new_y < w and forest[new_x][new_y] == '.')
            res += dfs(new_x, new_y);
    }
    return res;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(cin >> w >> h, w or h)
    {
        int startX, startY;
        for (int i = 0; i < h; i++)
            for (int j = 0; j < w; j++) 
            {
                cin >> forest[i][j];
                if (forest[i][j] == '@') {
                    startX = i;
                    startY = j;
                }
            }
        cout << dfs(startX, startY) << endl;
        memset(forest, 0, sizeof(forest));
    }
    return 0;
}
