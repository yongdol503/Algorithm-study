#include <stdio.h>

int dp[305];

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int n, i, stair[305];
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        scanf("%d",&stair[i]);
        if(i<3) dp[i]=stair[i]+dp[i-1];
        else if(i==3) dp[i]=max(stair[i-1],dp[i-2])+stair[i];
        else dp[i]=max(dp[i-2],dp[i-3]+stair[i-1])+stair[i];
    }
    
    printf("%d\n",dp[n]);
    
	return 0;
}
