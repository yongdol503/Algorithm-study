#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v[10001];
vector<bool> check(10001, false);
int ans, sum;

void dfs(int idx)
{
    check[idx] = true;
    if (v[idx].size() == 1 && sum != 0)
    {
        if (ans < sum)
        {
            ans = sum;
        }
    }
    else
    {
        for (auto &tmp : v[idx])
        {
            if (check[tmp.first])
            {
                continue;
            }
            sum += tmp.second;
            dfs(tmp.first);
            sum -= tmp.second;
        }
    }
    check[idx] = false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    for (int i = 1; i <= n; i++)
    {
        if (v[i].size() == 1)
        {
            sum = 0;
            dfs(i);
        }
    }

    cout << ans;

    return 0;
}