#include "bits/stdc++.h"

using namespace std;

void check(int parent, int current, map<int, vector<int>> &m, vector<bool> &visit, int &drawn)
{
    if (!visit[current])
    {
        visit[current] = true;
        drawn++;
    }

    if (parent)
    {
        bool flag = false;
        for (auto &i : m[current])
        {
            if (i == parent)
            {
                flag = true;
            }

            if (flag && visit[i] == false)
            {
                check(current, i, m, visit, drawn);
            }
        }
    }
    else
    {
        for (auto &i : m[current])
        {
            if (visit[i] == false)
            {
                check(current, i, m, visit, drawn);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, u, v, drawn = 1, ans = 0;
        cin >> n;
        map<int, vector<int>> m;
        vector<bool> visit(n + 1);
        vector<int> order(n + 1);
        for (int i = 1; i < n; i++)
        {
            cin >> u >> v;
            if (m[u].empty())
            {
                order.push_back(u);
            }
            if (m[v].empty())
            {
                order.push_back(v);
            }
            m[u].push_back(v);
            m[v].push_back(u);
        }

        visit[1] = true;
        while (n != drawn)
        {
            ans++;
            for (int i : order)
            {
                if (visit[i] && visit[m[i][0]] == false)
                {
                    check(0, i, m, visit, drawn);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}