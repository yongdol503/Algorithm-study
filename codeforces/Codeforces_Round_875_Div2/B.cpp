#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, tmp, last = 0, len = 1, ans = 1;
        unordered_map<int, int> m[2];
        cin >> n;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> tmp;
                if (last == tmp)
                {
                    len++;
                }
                else
                {
                    len = 1;
                    last = tmp;
                }
                if (m[i][tmp] < len)
                {
                    m[i][tmp] = len;
                }
            }
            last = 0;
        }

        for (int i = 1; i <= 2 * n; i++)
        {
            if (ans < m[0][i] + m[1][i])
            {
                ans = m[0][i] + m[1][i];
            }
        }

        cout << ans << "\n";
    }

    return 0;
}