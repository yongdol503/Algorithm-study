#include <stdio.h>
 
int main(void){
 
    int dp[1010] = {0,1,2};
    int i,n;
 
    scanf("%d", &n);
 
    for (i = 3; i <= n; i++) dp[i]=(dp[i-1] +dp[i-2])%10007;
 
    printf("%d\n", dp[n]);
    return 0;
}