#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, b, c;
        cin >> n >> b >> c;
        vector<pair<int, int>> v[10001];
        vector<int> ans(n + 1, 1e7 + 1);

        while (b--)
        {
            int a, b, s;
            cin >> a >> b >> s;
            v[b].push_back({a, s});
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, c});
        ans[c] = 0;
        while (pq.size())
        {
            auto current = pq.top();
            pq.pop();
            if (ans[current.second] != current.first)
            {
                continue;
            }

            for (auto i : v[current.second])
            {
                if (ans[i.first] > ans[current.second] + i.second)
                {
                    ans[i.first] = ans[current.second] + i.second;
                    pq.push({ans[i.first], i.first});
                }
            }
        }

        int cnt = 0, max = 0;
        for (auto i : ans)
        {
            if (i == 1e7 + 1)
            {
                continue;
            }

            cnt++;
            if (max < i)
            {
                max = i;
            }
        }

        cout << cnt << " " << max << "\n";
    }

    return 0;
}
