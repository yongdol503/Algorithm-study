#include<iostream>

#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int dp[16], t[16], p[16];
int n, ans;

int main()
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>t[i]>>p[i];
	for(int i=0; i<n; i++)
	{
		if(i+t[i]<=n)
			dp[i+t[i]]=max(dp[i+t[i]],dp[i]+p[i]);
		if(i+1<=n)
			dp[i+1]=max(dp[i],dp[i+1]);
	}
	cout<<dp[n];
	return 0;
}