#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<long long> dp(n);
	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];
	dp[0]=a[0];
	for(int i=1; i<n; i++)
	{
		dp[i]=a[i];
		if(dp[i]<dp[i-1]+a[i]) dp[i]=dp[i-1]+a[i];
	}
	long long ans=dp[0];
	for(int i=1;i<n;i++) if(ans<dp[i]) ans=dp[i];
	cout<<ans;
	
	
	return 0;
}