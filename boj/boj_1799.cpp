#include <bits/stdc++.h>

using namespace std;

int n, ans;
int chess[10][10], check[2][19];

void solve(int x, int y, int cnt, int color)
{
    if (ans < cnt)
    {
        ans = cnt;
    }

    for (int i = x, j = y; i < n; j += 2)
    {
        if (j >= n)
        {
            i++;
            j = ((i + color) & 1);
            if (i >= n)
            {
                return;
            }
        }

        if (chess[i][j] == 0 || check[0][i + j] == 1 || check[1][n - 1 + i - j] == 1)
        {
            continue;
        }

        check[0][i + j] = check[1][n - 1 + i - j] = 1;
        solve(i, j + 2, cnt + 1, color);
        check[0][i + j] = check[1][n - 1 + i - j] = 0;
    }
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
            cin >> chess[i][j];
        }
    }

    solve(0, 0, 0, 0);
    solve(0, 1, ans, 1);

    cout << ans << "\n";

    return 0;
}
