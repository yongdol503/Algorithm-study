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
        int n, ans = 0, cnt = 1;
        vector<int> bits;
        string s;
        cin >> n;
        cin >> s;
        char last = s[0];
        for (int j = 1; j < n; j++)
        {
            if (s[j] == last)
            {
                cnt++;
            }
            else
            {
                bits.push_back(cnt);
                cnt = 1;
                last = s[j];
            }
        }
        bits.push_back(cnt);

        for (int j = 0; j < bits.size(); j++)
        {
            if (bits[j] % 2)
            {
                ans++;
                bits[j]--;
                bits[j + 1]++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}