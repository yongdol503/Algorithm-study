#include <bits/stdc++.h>

#define INF 200001

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int V, E, K;
    cin >> V >> E >> K;

    vector<pair<int, int>> graph[20001];
    vector<int> ans(V + 1, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({w, v});
    }

    pq.push({0, K});
    ans[K] = 0;
    while (pq.size())
    {
        auto current = pq.top();
        pq.pop();
        if (current.first != ans[current.second])
        {
            continue;
        }

        for (auto &tmp : graph[current.second])
        {
            if (ans[tmp.second] > ans[current.second] + tmp.first)
            {
                ans[tmp.second] = ans[current.second] + tmp.first;
                pq.push({ans[tmp.second], tmp.second});
            }
        }
    }

    for (auto it = ans.begin() + 1; it != ans.end(); it++)
    {
        if (*it == INF)
        {
            cout << "INF\n";
        }
        else
        {
            cout << *it << "\n";
        }
    }

    return 0;
}