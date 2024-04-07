#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, m, v, t;
    cin >> n;
    vector<pair<int, int>> door(n);
    vector<pair<long long, long long>> table;
    for (int i = 0; i < n; i++)
    {
        cin >> door[i].first >> door[i].second;
    }

    for (int i = 0; i < (1 << n); i++)
    {
        long long f = 0, c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                f += door[j].first;
                c += door[j].second;
            }
        }
        table.push_back({f, c});
    }

    sort(table.begin(), table.end());

    for (int i = table.size() - 2; i >= 0; i--)
    {
        if (table[i].second > table[i + 1].second)
        {
            table[i].second = table[i + 1].second;
        }
    }

    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> v >> t;

        auto iter = table.begin();
        for (; iter != table.end(); iter++)
        {
            if (iter->first * t >= v)
            {
                break;
            }
        }
        cout << "Case " << i << ": " << (iter == table.end() ? "IMPOSSIBLE" : to_string(iter->second))
             << "\n";
    }

    return 0;
}
