#include <iostream>
#include <vector>

using namespace std;

void moveZeros(vector<int> &nums)
{
	int z = 0;
	int i = 0;
	while (i + z < nums.size())
	{
		nums[i] = nums[i + z];
		if (nums[i + z] == 0)
		{
			z++;
		}
		else
		{
			i++;
		}
	}
	for (int j = 0; j < z; j++)
	{
		nums[nums.size() - 1 - j] = 0;
	}
}

int main(int argc, const char **argv)
{

	vector<int> n = {0, 1, 0, 3, 12};

	moveZeros(n);

	for (int i : n)
	{
		cout << i << ' ';
	}
	cout << endl;

	return 0;
}