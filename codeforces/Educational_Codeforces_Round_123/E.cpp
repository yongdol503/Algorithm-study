#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x = 1, y = 1;
        string s;
        cin >> n;
        cin >> s;
        vector<vector<int> > map(n + 1, vector<int>(n + 1, 0));
        for (auto ch = s.begin(); ch != s.end(); ch++)
        {
            if (*ch == 'D')
            {
                y++;
            }
            else if (*ch == 'R')
            {
                x++;
            }
            map[x][y]++;
        }
        {
        }
    }
}