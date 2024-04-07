#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n, cnt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                    continue;
                cout << i << " " << j << endl;
                vector<int> check(n + 1, 0);
                vector<int> anti_permutation;
                check[i] = check[j] = 1;
                anti_permutation.push_back(i);
                anti_permutation.push_back(j);

                int id = 1;
                while(anti_permutation.size()!=n)
                {
                    
                }
            }
        }
    }
}
