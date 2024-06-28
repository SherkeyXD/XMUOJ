#include <bits/stdc++.h>
using namespace std;

int maxpair;
int paircount;
int totalCost;
int fcost;

void findmaxpair(vector<pair<int, pair<int, int>>> &pairs, vector<bool> &used, int index)
{
    if (index == pairs.size())
    {
        if (maxpair < paircount)
        {
            maxpair = paircount;
            fcost = totalCost;
        }
        else if (maxpair == paircount) fcost = min(fcost, totalCost);
        return;
    }

    int cost = pairs[index].first;
    int u = pairs[index].second.first;
    int v = pairs[index].second.second;

    findmaxpair(pairs, used, index + 1);

    if (!used[u] and !used[v])
    {
        used[u] = used[v] = true;
        paircount++;
        totalCost += cost;

        findmaxpair(pairs, used, index + 1);

        used[u] = used[v] = false;
        paircount--;
        totalCost -= cost;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> cost(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> cost[i][j];

    vector<pair<int, pair<int, int>>> pairs;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (cost[i][j] == -1) continue;
            if (j + 1 < m and cost[i][j + 1] != -1)
                pairs.push_back({cost[i][j] + cost[i][j + 1], {i * m + j, i * m + (j + 1)}});
            if (i + 1 < n and cost[i + 1][j] != -1)
                pairs.push_back({cost[i][j] + cost[i + 1][j], {i * m + j, (i + 1) * m + j}});
        }
    }

    sort(pairs.begin(), pairs.end());

    vector<bool> used(n * m, false);

    maxpair = 0;
    paircount = 0;
    totalCost = 0;
    fcost = INT_MAX;

    findmaxpair(pairs, used, 0);

    cout << fcost << endl;

    return 0;
}