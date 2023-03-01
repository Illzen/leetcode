#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int z = 0;
    int i = 0;
    while (i + z < nums.size())
    {
        nums[i] = nums[i + z];
        if (nums[i + z] == val)
        {
            z++;
        }
        else
        {
            i++;
        }
    }
    return nums.size()-z;
}