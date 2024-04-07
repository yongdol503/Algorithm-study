#include <bits/stdc++.h>

using namespace std;

int n, k, ans = 1e9;

void solve(int current, int cnt)
{
    if (current < n)
    {
        solve(current << 1, cnt);
        if (cnt < k)
        {
            solve((current << 1) + 1, cnt + 1);
        }
    }
    else
    {
        if (current - n < ans)
        {
            ans = current - n;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    solve(1, 1);

    cout << ans;

    return 0;
}