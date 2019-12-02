4#include <stdio.h>

int dp[3][1010];

int main()
{
    int rgb[3][1010], hnum, i, solve=99999;
    
    scanf("%d",&hnum);
    
    for(i=0;i<hnum;i++) scanf("%d %d %d",&rgb[0][i],&rgb[1][i],&rgb[2][i]);
    
    for(i=0;i<3;i++)
        dp[i][0]=rgb[i][0];
    
    for(i=1;i<hnum;i++)
    {
        dp[0][i] = (dp[1][i-1] < dp[2][i-1] ? dp[1][i-1] : dp[2][i-1])+rgb[0][i];
        dp[1][i] = (dp[0][i-1] < dp[2][i-1] ? dp[0][i-1] : dp[2][i-1])+rgb[1][i];
        dp[2][i] = (dp[0][i-1] < dp[1][i-1] ? dp[0][i-1] : dp[1][i-1])+rgb[2][i];
    }
    
    for(i=0;i<3;i++) if(dp[i][hnum-1]<solve) solve=dp[i][hnum-1];
    printf("%d\n",solve);
	return 0;
}