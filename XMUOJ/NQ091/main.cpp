#include <bits/stdc++.h>
using namespace std;

// Ref: https://blog.csdn.net/yzlmhzz/article/details/124266866

int p, q;
char resx[26], resy[26];
int dy[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dx[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

bool judge(int x, int y, int pos)
{
    for (int i = 0; i <= pos; i++)
        if (x == resx[i] and y == resy[i])
            return false;
    return true;
}

bool dfs(int r, int l, int pos)
{
    resy[pos] = l + 65;
    resx[pos] = r + 49;

    if (pos == p * q - 1)
        return true;
    for (int i = 0; i < 8; i++)
    {
        int x = r + dx[i], y = l + dy[i];
        if (x >= 0 and x < p and y >= 0 and y < q and judge(x + 49, y + 65, pos))
        {
            resy[pos + 1] = y + 65;
            resx[pos + 1] = x + 49;
            if (dfs(x, y, pos + 1)) return true;
        }
    }
    return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int n;
    cin >> n;

    for(int num=1; num<=n; num++)
    {
        cin >> p >> q;
        cout << '#' << num << ':' << endl;
        if (dfs(0, 0, 0))
            for (int i = 0; i < p * q; i++)
                cout << resy[i] << resx[i];
        else
            cout << "none";
        cout << endl;
    }
    return false;
}