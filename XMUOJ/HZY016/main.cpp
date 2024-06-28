#include <bits/stdc++.h>
using namespace std;

int ans = 0, n;
int vis[3][16] = {0};

void search(int cur)
{
    if (cur == n) ans++;
    else for (int i = 0; i < n; i++)
    {
        if (!vis[0][i] and !vis[1][cur + i] and !vis[2][cur - i + n])
        {
            vis[0][i] = vis[1][cur + i] = vis[2][cur - i + n] = 1;
            search(cur + 1);
            vis[0][i] = vis[1][cur + i] = vis[2][cur - i + n] = 0;
        }
    }
}

int main()
{
    cin >> n;

    search(0);

    cout << ans << endl;

    return 0;
}