#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        int max[2];
        cin >> n >> m;
        vector<int> num(n * m);
        for (int i = 0; i < n * m; i++)
        {
            cin >> num[i];
        }
        sort(num.begin(), num.end());
        max[0] = num[n * m - 1] - num[0];
        max[1] = num[n * m - 2] - num[0] < num[n * m - 1] - num[1] ? num[n * m - 1] - num[1] : num[n * m - 2] - num[0];

        if (n < m)
        {
            cout << max[0] * (n * (m - 1)) + max[1] * (n - 1) << "\n";
        }
        else
        {
            cout << max[0] * (m * (n - 1)) + max[1] * (m - 1) << "\n";
        }
    }

    return 0;
}