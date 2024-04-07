#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M, x, y, k;
    int m[20][20], dice[6] = {0}, dirs[5][4] = {{}, {2, 0, 3, 5}, {3, 0, 2, 5}, {4, 0, 1, 5}, {1, 0, 4, 5}};
    cin >> N >> M >> x >> y >> k;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> m[i][j];
        }
    }

    while (k--)
    {
        int dir;
        cin >> dir;

        if (dir == 1 && y + 1 < M)
        {
            y++;
        }
        else if (dir == 2 && y - 1 >= 0)
        {
            y--;
        }
        else if (dir == 3 && x - 1 >= 0)
        {
            x--;
        }
        else if (dir == 4 && x + 1 < N)
        {
            x++;
        }
        else
        {
            continue;
        }

        int tmp = dice[dirs[dir][0]];
        dice[dirs[dir][0]] = dice[dirs[dir][1]];
        dice[dirs[dir][1]] = dice[dirs[dir][2]];
        dice[dirs[dir][2]] = dice[dirs[dir][3]];
        dice[dirs[dir][3]] = tmp;

        if (m[x][y] == 0)
        {
            m[x][y] = dice[5];
        }
        else
        {
            dice[5] = m[x][y];
            m[x][y] = 0;
        }

        cout << dice[0] << "\n";
    }

    return 0;
}