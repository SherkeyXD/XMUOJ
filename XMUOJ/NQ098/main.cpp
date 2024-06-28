#include <bits/stdc++.h>
using namespace std;

// Ref: https://www.luogu.com.cn/blog/cpp/solution-p1074

struct f
{
    int rank, sum;
} cou[10];
int a[10][10], hang[10][10], lie[10][10], gong[10][10], s[100][4], u, ok, most = -1, have;

int which(int i, int j)
{
    if (i <= 3)
    {
        if (j <= 3) return 1;
        else if (j <= 6) return 2;
        else return 3;
    }
    else if (i <= 6)
    {
        if (j <= 3) return 4;
        else if (j <= 6) return 5;
        else return 6;
    }
    else
    {
        if (j <= 3) return 7;
        else if (j <= 6) return 8;
        else return 9;
    }
}

int point(int i, int j)
{
    if (i == 1 or j == 1 or i == 9 or j == 9)
        return 6;
    if (i == 2 or j == 2 or i == 8 or j == 8)
        return 7;
    if (i == 3 or j == 3 or i == 7 or j == 7)
        return 8;
    if (i == 4 or j == 4 or i == 6 or j == 6)
        return 9;
    return 10;
}

void dfs(int p, int score)
{
    if (p == u)
    {
        if (score > most) most = score;
        return;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (!hang[s[p][0]][i] and !lie[s[p][1]][i] and !gong[s[p][3]][i])
        {
            hang[s[p][0]][i] = lie[s[p][1]][i] = gong[s[p][3]][i] = 1;
            dfs(p + 1, score + (s[p][2] * i));
            hang[s[p][0]][i] = lie[s[p][1]][i] = gong[s[p][3]][i] = 0;
        }
    }
    return;
}

bool cmp(f a, f b)
{
    return a.sum < b.sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 1; i <= 9; i++)
        cou[i].rank = i;
    for (int i = 1; i <= 9; i++)
        for (int j = 1; j <= 9; j++)
        {
            cin >> a[i][j];
            if (a[i][j] > 0)
                hang[i][a[i][j]] = lie[j][a[i][j]] = gong[which(i, j)][a[i][j]] = 1, have += a[i][j] * point(i, j);
            else
                cou[i].sum++;
        }

    sort(cou + 1, cou + 10, cmp);
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
            if (a[cou[i].rank][j] == 0)
                s[u][0] = cou[i].rank, s[u][1] = j, s[u][2] = point(cou[i].rank, j), s[u++][3] = which(cou[i].rank, j);
    }
    dfs(0, have);
    cout << most << endl;

    return 0;
}