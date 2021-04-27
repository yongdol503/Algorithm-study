#include <stdio.h>
int dp[1100]={0,1,3};
int main(void) {
	int n,i;	
	scanf("%d",&n);
	for(i=3;i<=n;i++) dp[i]=(dp[i-1]+2*dp[i-2])%10007;
	printf("%d\n",dp[n]%10007);
	return 0;
}