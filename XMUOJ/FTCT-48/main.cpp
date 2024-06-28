// From: https://blog.csdn.net/qq_73422635/article/details/138974596
#include <bits/stdc++.h>
using namespace std;

void topologicalSort(int N, vector<vector<int>> &adj, vector<int> &topoOrder)
{
    vector<int> inDegree(N + 1, 0);
    for (int u = 1; u <= N; u++)
        for (int v : adj[u])
            inDegree[v]++;

    queue<int> q;
    for (int i = 1; i <= N; i++)
        if (inDegree[i] == 0)
            q.push(i);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        topoOrder.push_back(u);
        for (int v : adj[u])
            if (--inDegree[v] == 0)
                q.push(v);
    }
}

vector<int> findLongestPaths(int N, vector<vector<int>> &adj)
{
    vector<int> dp(N + 1, 1);
    vector<int> topoOrder;

    topologicalSort(N, adj, topoOrder);

    for (int u : topoOrder)
        for (int v : adj[u])
            dp[v] = max(dp[v], dp[u] + 1);

    return dp;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    vector<int> longestPaths = findLongestPaths(N, adj);

    for (int i = 1; i <= N; i++)
        cout << longestPaths[i] << endl;

    return 0;
}