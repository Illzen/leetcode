#include<iostream>
#include<vector>

using namespace std;

int minCostClimbingStairs(vector<int>& cost){
    if (cost.size()==1)
        return cost[0];
    else if (cost.size()==2)
        return min(cost[0],cost[1]);
    else if (cost.size()>2)
    {
        int dp[cost.size()+1];
        dp[0]=dp[1]=0;
        for (int i = 2; i < cost.size()+1; i++)
        {
            dp[i]=min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
        }
        return dp[cost.size()];
    }
    else
        return 0;
}

int main(int argc, char const *argv[])
{
	vector<int> cost={10,15,20};
	cout<<minCostClimbingStairs(cost)<<endl;
	return 0;
}
