#include <bits/stdc++.h>
using namespace std;

// Ref: https://blog.csdn.net/yzlmhzz/article/details/124501899

int V, N, res = 1000000;
int mins[21] = {0}, minv[21] = {0};

void cake(int pos, int r, int h, int v, int s)
{
    if (v > V or s >= res) return;
    if ((V - v) * 2 / (r + 1) >= res - s) return;
    if (v + minv[N - pos] > V) return;
    if (s + mins[N - pos] > res) return;
    if (pos == N)
    {
        if (v == V and s < res) res = s;
        return;
    }
    for (int i = r; i >= N - pos; i--)
    {
        if (i * i > V - v) continue;
        if (pos == 0)
        {
            s = i * i;
            h = V / i / i;
        }
        for (int j = h; j >= N - pos; j--)
            cake(pos + 1, i - 1, j - 1, v + i * i * j, s + 2 * i * j);
    }
    return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    cin >> V >> N;
    int temp = sqrt(V / N);

    for (int i = 1; i <= N; i++)
    {
        mins[i] = mins[i - 1] + 2 * i * i;
        minv[i] = minv[i - 1] + i * i * i;
    }
    cake(0, temp, V / N / N, 0, 0);
    cout << (res == 1000000?0:res) << endl;

    return 0;
}