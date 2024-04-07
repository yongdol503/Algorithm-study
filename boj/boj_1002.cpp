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
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        if (x1 == x2 && y1 == y2)
        {
            if (r1 == r2)
            {
                cout << "-1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else
        {
            int d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2), d2 = (r1 + r2) * (r1 + r2), d3 = (r1 - r2) * (r1 - r2), d4 = (r2 - r1) * (r2 - r1);
            if (d1 == d2 || d1 == d3 || d1 == d4)
            {
                cout << "1\n";
            }
            else if (d1 > d2 || d1 < d3 || d1 < d4)
            {
                cout << "0\n";
            }
            else
            {
                cout << "2\n";
            }
        }
    }

    return 0;
}