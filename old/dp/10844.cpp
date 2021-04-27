#include <iostream>
using namespace std;

int dp[101][10];
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=9;i++) dp[1][i]=1;
	for(int i=2;i<=n;i++){
		for(int j=0;j<=9;j++){
			if(j>0) dp[i][j]+=dp[i-1][j-1];
			if(j<9) dp[i][j]+=dp[i-1][j+1];
			dp[i][j]%=1000000000;
		}
	}
    long long re=0;
	for(int i=0;i<=9;i++) re+=dp[n][i];
	re%=1000000000;
    cout<<re;
	return 0;
}