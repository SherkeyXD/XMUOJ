#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 1;

vector<pair<int, int>> roads[N];
int max_height[N] = {0};
bool visited[N] = {0};

void dfs(int start)
{
    priority_queue<pair<int, int>> q;
    q.push({INT_MAX, start});

    while (!q.empty())
    {
        int height = q.top().first;
        int city = q.top().second;
        q.pop();

        if (visited[city]) continue;
        visited[city] = true;
        max_height[city] = height;

        for (auto road : roads[city])
        {
            int next_city = road.first;
            int next_height = min(height, road.second);
            q.push({next_height, next_city});
        }
    }
}

int main()
{
    int n, m, s;
    cin >> n >> m >> s;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        roads[u].push_back({v, w});
        roads[v].push_back({u, w});
    }

    dfs(s);

    for (int i = 1; i <= n; i++)
    {
        if (i != s)
        {
            if (max_height[i] == 0)
                cout << "unreachable" << endl;
            else
                cout << max_height[i] << endl;
        }
    }

    return 0;
}