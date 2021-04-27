#include<stdio.h>

int max(int a,int b)
{
	return a > b ? a : b;
}

int main(){
	int n,dp[1100]={0,},dpi[1100],i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&dpi[i]);
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++)
			dp[i]=max(dpi[j]+dp[i-j],dp[i]);
	printf("%d\n",dp[n]);
	return 0;
}