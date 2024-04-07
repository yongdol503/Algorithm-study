#include <bits/stdc++.h>

using namespace std;

int n, ans = 2001;
int s[20][20], team[20];

void solve(int current, int depth)
{
    team[current] = 1;
    if (depth == n / 2 - 1)
    {
        int sum[2] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (team[i] == team[j])
                {
                    sum[team[i]] += s[i][j] + s[j][i];
                }
            }
        }
        if (ans > abs(sum[0] - sum[1]))
        {
            ans = abs(sum[0] - sum[1]);
        }
    }
    else
    {
        for (int i = current + 1; i < depth + n / 2 + 2; i++)
        {
            solve(i, depth + 1);
        }
    }
    team[current] = 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < n / 2 + 1; i++)
    {
        solve(i, 0);
    }

    cout << ans;

    return 0;
}