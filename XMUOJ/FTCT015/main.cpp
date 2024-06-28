// From: https://blog.csdn.net/qq_73422635/article/details/138974535
#include <bits/stdc++.h>
using namespace std;

double tsp(int i, double cw, double mind, vector<int> &x, vector<vector<double>> &dist)
{
    int n = x.size();
    if (i == n - 1) return min(mind, cw + dist[x[i - 1]][x[i]]);
    for (int j = i; j < n - 1; j++)
    {
        if (cw + dist[x[i - 1]][x[j]] < mind)
        {
            swap(x[i], x[j]);
            cw += dist[x[i - 1]][x[i]];
            mind = tsp(i + 1, cw, mind, x, dist);
            cw -= dist[x[i - 1]][x[i]];
            swap(x[i], x[j]);
        }
    }
    return mind;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<double>> dist(n, vector<double>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> dist[i][j];

    vector<int> x(n);
    for (int i = 0; i < n; i++) x[i] = i;

    double mind = 1e9;

    cout << tsp(1, 0, mind, x, dist) << endl;
}