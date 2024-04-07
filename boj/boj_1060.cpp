#include <bits/stdc++.h>

using namespace std;

int n, m, v;
vector<int> graph[1001];

void dfs()
{
    vector<bool> check(n + 1);
    stack<int> s;
    s.push(v);

    while (s.size())
    {
        int current = s.top();
        s.pop();
        if (check[current])
        {
            continue;
        }

        cout << current << " ";
        check[current] = true;

        for (auto it = graph[current].rbegin(); it != graph[current].rend(); it++)
        {
            if (check[*it])
            {
                continue;
            }
            s.push(*it);
        }
    }
}

void bfs()
{
    vector<bool> check(n + 1);
    queue<int> q;
    q.push(v);

    while (q.size())
    {
        int current = q.front();
        q.pop();

        if (check[current])
        {
            continue;
        }
        cout << current << " ";
        check[current] = true;

        for (auto it = graph[current].begin(); it != graph[current].end(); it++)
        {
            if (check[*it])
            {
                continue;
            }
            q.push(*it);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> v;
    while (m--)
    {
        int i, j;
        cin >> i >> j;
        graph[i].push_back(j);
        graph[j].push_back(i);
    }

    for (int i = 1; i <= 1000; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs();
    cout << "\n";
    bfs();

    return 0;
}