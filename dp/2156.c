#include <stdio.h>

int dp[11000],podo[11000];

int max(int a,int b)
{
	return a > b ? a : b;
}

int main(void) {
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",&podo[i]);
	
	dp[1]=podo[1];
	if(n==1)
	{
		printf("%d\n",dp[1]);
		return 0;
	}
	dp[2]=podo[1]+podo[2];
	if(n==2)
	{
		printf("%d\n",dp[2]);
		return 0;
	}
	
	for(i=3;i<=n;i++)
	{
		dp[i]=max(dp[i-1],max(dp[i-2]+podo[i],dp[i-3]+podo[i-1]+podo[i]));
	}
	
	printf("%d\n",dp[n]);
	
	return 0;
}