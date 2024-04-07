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
        string word;
        int ans = 0;
        unordered_map<char, int> m;
        cin >> word;

        for (auto &ch : word)
        {
            m[ch]++;
        }

        for (auto &p : m)
        {
            if (p.second > 1)
            {
                ans++;
            }
        }

        cout << (ans > 1 ? "YES\n" : "NO\n");
    }

    return 0;
}