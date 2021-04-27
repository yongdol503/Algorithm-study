#include <stdio.h>

int dp[130000],pt[130000];

int max(int a,int b)
{
	return a > b ? a : b;
}

int main()
{
	int f,j=1,i,solve=0;
	scanf("%d",&f);
	for(i=1;i<=f*(f+1)/2;i++) scanf("%d",&pt[i]);
	dp[1]=pt[1];
	for(i=2;i<=f;i++)
	{
		for(;j<=i*(i-1)/2;j++)
		{
			dp[i+j-1]=max(dp[i+j-1],dp[j]+pt[i+j-1]);
			dp[i+j]=max(dp[i+j],dp[j]+pt[i+j]);
		}
	}
	for(i=f*(f-1)/2+1;i<=f*(f+1)/2;i++) solve=max(solve,dp[i]);
	printf("%d\n",solve);
	return 0;
}