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

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, w;
        cin >> n >> m >> w;

        vector<edge> v(2 * m + w);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i].a >> v[i].b >> v[i].c;
            v[i + m].a = v[i].b;
            v[i + m].b = v[i].a;
            v[i + m].c = v[i].c;
        }
        for (int i = 0; i < w; i++)
        {
            cin >> v[i + 2 * m].a >> v[i + 2 * m].b >> v[i + 2 * m].c;
            v[i + 2 * m].c *= -1;
        }

        // 모든 정점을 동시에 진행
        vector<long long> dist(n + 1, 0);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2 * m + w; j++)
            {
                if (dist[v[j].a] + v[j].c < dist[v[j].b])
                {
                    dist[v[j].b] = dist[v[j].a] + v[j].c;
                    if (i == n - 1)
                    {
                        flag = true;
                    }
                }
            }
        }

        cout << flag ? "YES\n" : "NO\n";
    }

    return 0;
}