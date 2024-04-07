#include <bits/stdc++.h>

using namespace std;

bool col[15], gradient[2][29];
int ans;

void solve(int n, int depth)
{
    if (n == depth)
    {
        ans++;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (col[i] || gradient[0][i - depth + n] || gradient[1][i + depth])
        {
            continue;
        }

        col[i] = gradient[0][i - depth + n] = gradient[1][i + depth] = true;
        solve(n, depth + 1);
        col[i] = gradient[0][i - depth + n] = gradient[1][i + depth] = false;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    solve(n, 0);
    cout << ans;

    return 0;
}