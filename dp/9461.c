#include <stdio.h>

int main() {
	int t, n, i;
	long long dp[110]={0,1, 1, 1, 2, 2, 3, 4, 5, 7, 9};
	
	scanf("%d",&t);
	for(i=11; i<=110; i++) dp[i]=dp[i-2]+dp[i-3];
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		printf("%lld\n",dp[n]);
	}
	
	return 0;
}