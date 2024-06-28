#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    vector<queue<int>> boxes(M);
    vector<int> top(M);
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < M; i++)
    {
        int k;
        cin >> k;
        while (k--)
        {
            int color;
            cin >> color;
            boxes[i].push(color);
        }
        top[i] = boxes[i].front();
        boxes[i].pop();
        pq.push({top[i], i});
    }

    while (pq.size() > 1)
    {
        auto box1 = pq.top();
        pq.pop();
        auto box2 = pq.top();
        pq.pop();

        if (box1.first != box2.first)
        {
            cout << "No\n";
            return 0;
        }

        if (!boxes[box1.second].empty())
        {
            top[box1.second] = boxes[box1.second].front();
            boxes[box1.second].pop();
            pq.push({top[box1.second], box1.second});
        }

        if (!boxes[box2.second].empty())
        {
            top[box2.second] = boxes[box2.second].front();
            boxes[box2.second].pop();
            pq.push({top[box2.second], box2.second});
        }
    }

    cout << (pq.empty() ? "Yes\n" : "No\n");

    return 0;
}