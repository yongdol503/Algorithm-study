#include <stdio.h>

int x,i,dp[1000001];
int main()
{
	
	scanf("%d",&x);
	for(i=0;i<x;i++) dp[i]=9999999;
	for(i=x;i>1;i--)
	{
		if(i%3==0)
			dp[i/3]=dp[i/3]<dp[i]+1 ? dp[i/3] : dp[i]+1;
		if(i%2==0)
			dp[i/2]=dp[i/2]<dp[i]+1 ? dp[i/2] : dp[i]+1;
		
		dp[i-1]=dp[i-1]<dp[i]+1 ? dp[i-1] : dp[i]+1;
	}
	
	printf("%d ",dp[1]);
	
	return 0;
	
}