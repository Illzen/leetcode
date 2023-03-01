#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums){
	if (nums.size() == 1)
	{
		return 1; 
	}
	
	int n=1;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] != nums[i-1])
		{
			nums[n] = nums[i];
			n++;
		}
	}
	return n;
}
int main(){
	vector<int> n = {1,2,2};
	cout<<removeDuplicates(n)<<'\n';
}