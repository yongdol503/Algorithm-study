#include <stdio.h>

int dp[50][2]={{1,0},{0,1},};

int main(void) {
	int n,i,fi;
	for(i=2;i<41;i++)
	{
		dp[i][0]=dp[i-1][0]+dp[i-2][0];
		dp[i][1]=dp[i-1][1]+dp[i-2][1];
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&fi);
		printf("%d %d\n",dp[fi][0], dp[fi][1]);
	}
	return 0;
}