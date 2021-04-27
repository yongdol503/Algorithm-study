#include<iostream>

//#define max(a,b) ((a)>(b)?(a):(b))

using namespace std;

int n;
int dp[100050][3] = { {0,1,1}, };
int main()
{
	
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % 9901;
		dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % 9901;
		dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % 9901;
	}

	cout << ((dp[n][0] > dp[n][1] ? dp[n][0] : dp[n][1]) > dp[n][2] ? (dp[n][0] > dp[n][1] ? dp[n][0] : dp[n][1]) : dp[n][2]);

	return 0;
}