#include <stdio.h>
long long dp[200]={0,1,1,};
int main()
{
	int i ,j;

	for(i=3;i<150;i++) dp[i]=dp[i-2]+dp[i-1];

	scanf("%d",&i);
	printf("%lld\n",dp[i]);
	return 0;
}