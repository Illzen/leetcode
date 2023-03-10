#include<iostream>
#include<vector>

using namespace std;

int uniquePathWithObstacles(vector<vector<int>>& obstacleGrid){
	cout<<obstacleGrid.size()<<' '<<obstacleGrid[0].size()<<endl;
	int dp[obstacleGrid.size()][obstacleGrid[0].size()];
	dp[0][0]=1;
	if (obstacleGrid[0][0]==1)
	{
		dp[0][0]=0;
	}
	
	for (int i = 1; i < obstacleGrid.size(); i++)
	{
		dp[i][0] = dp[i-1][0];
		if (obstacleGrid[i][0])
		{
			dp[i][0] = 0;
		}
	}
	for (int i = 1; i < obstacleGrid[0].size(); i++)
	{
		dp[0][i] = dp [0][i-1];
		if (obstacleGrid[0][i])
		{
			dp[0][i] = 0;
		}
	}
	for (int i = 1; i < obstacleGrid.size(); i++)
	{
		for (int j = 1; j < obstacleGrid[0].size(); j++)
		{
			dp[i][j] = dp[i-1][j]+dp[i][j-1];
			if (obstacleGrid[i][j])
			{
				dp[i][j] = 0;
			}
		}
	}
	return dp[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
}

int main(){
	vector<vector<int>> n;
}