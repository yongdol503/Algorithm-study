#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n + 1);

    v[1] = {0, 0};
    for (int i = 2; i <= n; i++)
    {
        v[i] = {v[i - 1].first + 1, i - 1};
        if (i % 2 == 0)
        {
            if (v[i / 2].first + 1 <= v[i].first)
            {
                v[i] = {v[i / 2].first + 1, i / 2};
            }
        }
        if (i % 3 == 0)
        {
            if (v[i / 3].first + 1 <= v[i].first)
            {
                v[i] = {v[i / 3].first + 1, i / 3};
            }
        }
    }

    cout << v[n].first << "\n"
         << n << " ";
    while (n != 1)
    {
        n = v[n].second;
        cout << n << " ";
    }

    return 0;
}