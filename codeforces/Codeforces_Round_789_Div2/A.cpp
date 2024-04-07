#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, cnt = 0;
        int check[110] = {0};
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int tmp;
            cin >> tmp;
            check[tmp]++;
            cnt++;
        }
        if (check[0] != 0)
        {
            cout << cnt - check[0] << "\n";
        }
        else
        {
            bool flag = false;
            for (int j = 1; j <= 100; j++)
            {
                if (check[j] >= 2)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                cout << cnt << "\n";
            }
            else
            {
                cout << cnt + 1 << "\n";
            }
        }
    }

    return 0;
}