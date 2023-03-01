#include<iostream>

using namespace std;

int climbStairs(int n) {
    if (n<1){
        return -1;
    } else if (n==1) {
        return 1;
    } else if (n==2){
        return 2;
    } else {
        int dp[n];
        dp[0] = 1;
        dp[1] = 2;
        for (int i = 2; i < n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n - 1];
    }
}