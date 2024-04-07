#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n[2] = {0, 0};
    char last;
    string s;
    cin >> s;

    last = s[0];
    for (auto &ch : s)
    {
        if (ch != last)
        {
            n[last - '0']++;
            last = ch;
        }
    }

    cout << (n[0] < n[1] ? n[1] : n[0]) << "\n";

    return 0;
}