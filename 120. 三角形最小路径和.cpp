#include<iostream>
#include<vector>

using namespace std;

int minimumTotal(vector<vector<int>>& triangle) 
{
	int n=triangle.size();
	for (int i = 1; i < n; i++)
	{
		triangle[i][0]+=triangle[i-1][0];
		triangle[i][i]+=triangle[i-1][i-1];
		for (int j = 1; j < triangle[i].size()-1; j++)
		{
			triangle[i][j]+=min(triangle[i-1][j],triangle[i-1][j-1]);
		}
	}
	int min=triangle[n-1][0];
	for (int i = 1; i < n; i++)
	{
		if (triangle[n-1][i]<min)
		{
			min=triangle[n-1][i];
		}
	}
	return min;
}