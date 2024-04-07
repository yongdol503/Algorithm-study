#include <bits/stdc++.h>
#define INF 1e9

using namespace std;

struct edge
{
    int a;
    int b;
    int c;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<edge> v(m + 1);
    vector<long long> dist(n + 1, INF);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i].a >> v[i].b >> v[i].c;
    }

    dist[1] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (dist[v[j].a] != INF && dist[v[j].a] + v[j].c < dist[v[j].b])
            {
                dist[v[j].b] = dist[v[j].a] + v[j].c;
                if (i == n - 1)
                {
                    cout << "-1\n";
                    return 0;
                }
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (dist[i] == INF)
        {
            cout << "-1\n";
        }
        else
        {
            cout << dist[i] << "\n";
        }
    }

    return 0;
}