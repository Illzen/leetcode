#include <iostream>
#include <vector>

using namespace std;
int maxProfit(vector<int> &prices)
{
	//int max = 0;
	//for (int i = 0; i < prices.size(); i++)
	//{
	//	for (int j = i + 1; j < prices.size(); j++)
	//	{
	//		if (prices[j] - prices[i] > max)
	//		{
	//			max = prices[j] - prices[i];
	//		}
	//	}
	//}
	//return max;
	int minprice=prices[0],maxprice=0;
	for (int i =1;i<prices.size();i++){
		if (prices[i]<=minprice)
		{
			minprice=prices[i];	
		}
		else{
			maxprice=max(maxprice,prices[i]-minprice);
		}
	}
	return maxprice;
}
int main()
{
	vector<int> n{7, 6, 4, 3, 1};
	cout << maxProfit(n) << '\n';
}