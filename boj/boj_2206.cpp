#include <bits/stdc++.h>

#define Y first
#define X second

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, depth = 0;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        for (int j = 0; j < m; j++)
        {
            v[i][j] = tmp[j] - '0';
        }
    }

    pair<int, int> dirs[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    queue<pair<int, int>> q;
    q.push({0, 0});
    v[0][0] = 2;
    while (q.size())
    {
        int size = q.size();
        depth++;
        while (size--)
        {
            auto current = q.front();
            q.pop();
            if (current.Y == n - 1 && current.X == m - 1)
            {
                cout << depth;
                return 0;
            }

            for (auto &dir : dirs)
            {
                pair<int, int> next = {current.Y + dir.Y, current.X + dir.X};
                if (next.Y >= 0 && next.Y < n && next.X >= 0 && next.X < m)
                {
                    if (v[current.Y][current.X] == 3 || v[current.Y][current.X] == 4)
                    {
                        if (v[next.Y][next.X] != 0)
                        {
                            continue;
                        }
                        v[next.Y][next.X] = 4; // 1 부수고 0 방문
                    }
                    else if (v[current.Y][current.X] == 2)
                    {
                        if (v[next.Y][next.X] == 2 || v[next.Y][next.X] == 3)
                        {
                            continue;
                        }

                        if (v[next.Y][next.X] == 1)
                        {
                            v[next.Y][next.X] = 3; // 부수고 1 방문
                        }
                        else
                        {
                            v[next.Y][next.X] = 2; // 0 방문
                        }
                    }

                    q.push({next.Y, next.X});
                }
            }
        }
    }

    cout << -1;
    return 0;
}