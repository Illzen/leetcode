#include<iostream>
#include<vector>

using namespace std;

int maxSubArray(vector<int>& nums) {
    vector<int> dp(nums.size());
    dp[0] = nums[0];
    int maxSub = dp[0];
    for(int i=1;i<nums.size();++i){
        dp[i] = max(dp[i-1]+nums[i],nums[i]);
            maxSub = max(maxSub,dp[i]);
    }
    return maxSub;
}