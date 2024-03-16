#include <bits/stdc++.h>
using namespace std;

// Ref: https://blog.csdn.net/matafeiyanll/article/details/105129868

#define INF 0x3f3f3f3f

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int l, w, m;
    while (cin >> l >> w >> m and (l or w or m))
    {
        int largets[l + 1][w + 1][m + 1];
        memset(largets, INF, sizeof(largets));
        for (int i = 0; i <= l; i++)
            for (int j = 0; j <= w; j++)
                for (int k = 0; k <= m; k++)
                {
                    if (k == 0)
                        largets[i][j][k] = i * j;
                    else if (i * j < k + 1)
                        largets[i][j][k] = INF;
                    else
                    {
                        for (int r = 1; r < i; r++)
                            for (int kk = 0; kk < k; kk++)
                                largets[i][j][k] = min(largets[i][j][k], max(largets[r][j][kk], largets[i - r][j][k - kk - 1]));
                        for (int c = 1; c < j; c++)
                            for (int kk = 0; kk < k; kk++)
                                largets[i][j][k] = min(largets[i][j][k], max(largets[i][c][kk], largets[i][j - c][k - kk - 1]));
                    }
                }
        cout << largets[l][w][m - 1] << endl;
    }
}
