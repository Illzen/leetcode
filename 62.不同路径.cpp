#include<iostream>

using namespace std;

int uniquePaths(int m, int n) {
    int dp[n][m];
    for(int i  = 0;i < m;++i)
        dp[0][i]=1;
    for(int i = 0;i<n;++i)
        dp[i][0]=1;
    for(int i=1;i<m;++i){
        for(int j=1;j<n;j++){
            dp[j][i]=dp[j-1][i]+dp[j][i-1];
        }
    }
    return dp[n-1][m-1];
}

int main(int argc, const char** argv) {
	cout << uniquePaths(3,7) << endl;
	return 0;
}