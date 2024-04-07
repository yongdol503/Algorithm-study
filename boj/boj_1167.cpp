#include <bits/stdc++.h>

using namespace std;

int top, ans = 0;
bool visit[100001];
vector<pair<int, int>> v[100001];

void dfs(int current, int len)
{
    visit[current] = true;

    for (auto &p : v[current])
    {
        if (visit[p.first])
        {
            continue;
        }

        dfs(p.first, len + p.second);
    }

    visit[current] = false;

    if (v[current].size() == 1)
    {
        if (ans < len)
        {
            ans = len;
            top = current;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int cur, next, value;
        cin >> cur;

        while (1)
        {
            cin >> next;
            if (next == -1)
            {
                break;
            }
            cin >> value;
            v[cur].push_back({next, value});
        }
    }

    dfs(1, 0);
    dfs(top, 0);
    cout << ans;

    return 0;
}