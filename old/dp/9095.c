#include <stdio.h>
int dp[20]={0,1,2,4,};
int main()
{
	int num ,i ,j;
	scanf("%d",&num);
	for(i=4;i<20;i++) dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
	for(i=0;i<num;i++)
	{
		scanf("%d",&j);
		printf("%d\n",dp[j]);
	}
	return 0;
}