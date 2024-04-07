#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, digit = 0, ans = 0;
    int num[10] = {0};
    cin >> n;
    while (num[9] == 0 && (n - ans))
    {
        ans++;
        num[0]++;
        for (int i = 0; i < digit; i++)
        {
            if (num[i] == num[i + 1])
            {
                num[i] = i;
                num[i + 1]++;
            }
            else
            {
                break;
            }
        }
        if (num[digit] == 10)
        {
            num[digit] = digit;
            digit++;
            num[digit] = digit;
        }
    }

    if (n - ans)
    {
        cout << -1;
    }
    else
    {
        for (int i = digit; i >= 0; i--)
        {
            cout << char('0' + num[i]);
        }
    }
    return 0;
}