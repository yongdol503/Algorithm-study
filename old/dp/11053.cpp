#include <iostream>
using namespace std;

int main() {
	
	int n;
	int a[1010],dp[1010];
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++)
	{
		dp[i]=1;
		for(int j=0; j<i; j++)
			if(a[j]<a[i] && dp[i]<dp[j]+1) dp[i]=dp[j]+1;
	}
	int len=dp[0];
	for(int i=1; i<n; i++) if(len<dp[i]) len=dp[i];
	cout<<len;
	return 0;
}