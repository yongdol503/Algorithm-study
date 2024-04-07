#include <bits/stdc++.h>

using namespace std;

int ans;

int recursion(string &s, int l, int r)
{
    ans++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1);
}

int isPalindrome(string &s)
{
    return recursion(s, 0, s.size() - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isPalindrome(s) << " " << ans << "\n";
        ans = 0;
    }

    return 0;
}