#include <bits/stdc++.h>

using namespace std;

int m[5][5];
int R, C, K, ans;

void dfs(int depth, int r, int c)
{
    if (depth == K)
    {
        if (r == 0 && c == C - 1)
        {
            ans++;
        }
        return;
    }

    m[r][c] = 1;
    if (r + 1 < R && m[r + 1][c] == 0)
    {
        dfs(depth + 1, r + 1, c);
    }
    if (r - 1 >= 0 && m[r - 1][c] == 0)
    {
        dfs(depth + 1, r - 1, c);
    }
    if (c + 1 < C && m[r][c + 1] == 0)
    {
        dfs(depth + 1, r, c + 1);
    }
    if (c - 1 >= 0 && m[r][c - 1] == 0)
    {
        dfs(depth + 1, r, c - 1);
    }
    m[r][c] = 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> R >> C >> K;

    for (int i = 0; i < R; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < C; j++)
        {
            if (s[j] == '.')
            {
                m[i][j] = 0;
            }
            else
            {
                m[i][j] = 1;
            }
        }
    }

    dfs(1, R - 1, 0);

    cout << ans;

    return 0;
}