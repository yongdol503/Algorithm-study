#include <bits/stdc++.h>

using namespace std;

int ans = 0;

void swap(vector<string> &v, int x1, int y1, int x2, int y2)
{
    char tmp = v[x1][y1];
    v[x1][y1] = v[x2][y2];
    v[x2][y2] = tmp;
}

void check(vector<string> &v, int i, int j, bool dir)
{
    int cnt = 1;
    char last;
    if (dir) // true -> col check
    {
        last = v[0][j];
        for (int idx = 1; idx < v.size(); idx++)
        {
            if (v[idx][j] == last)
            {
                cnt++;
            }
            else
            {
                last = v[idx][j];
                cnt = 1;
            }

            if (ans < cnt)
            {
                ans = cnt;
            }
        }
    }
    else // false -> row check
    {
        last = v[i][0];
        for (int idx = 1; idx < v.size(); idx++)
        {
            if (v[i][idx] == last)
            {
                cnt++;
            }
            else
            {
                last = v[i][idx];
                cnt = 1;
            }

            if (ans < cnt)
            {
                ans = cnt;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + 1 < n)
            {
                swap(v, i, j, i + 1, j);
                check(v, i, j, false);
                check(v, i, j, true);
                check(v, i + 1, j, true);
                swap(v, i, j, i + 1, j);
            }
            if (j + 1 < n)
            {
                swap(v, i, j, i, j + 1);
                check(v, i, j, true);
                check(v, i, j, false);
                check(v, i, j + 1, false);
                swap(v, i, j, i, j + 1);
            }
            if (i - 1 >= 0)
            {
                swap(v, i, j, i - 1, j);
                check(v, i, j, false);
                check(v, i, j, true);
                check(v, i - 1, j, true);
                swap(v, i, j, i - 1, j);
            }
            if (j - 1 >= 0)
            {
                swap(v, i, j, i, j - 1);
                check(v, i, j, true);
                check(v, i, j, false);
                check(v, i, j - 1, false);
                swap(v, i, j, i, j - 1);
            }
        }
    }

    cout << ans << "\n";

    return 0;
}