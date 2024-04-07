#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(const string &word, const int end)
{
    int l = 0, r = end;
    while (l < r)
    {
        if (word[l] != word[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int ans = -1;
        string word;
        cin >> word;

        for (int i = 1; i < word.size(); i++)
        {
            if (!isPalindrome(word, word.size() - i - 1))
            {
                ans = word.size() - i;
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}