#include<iostream>
#include<vector>

using namespace std;

double average(vector<int>& salary)
{
	int min,max;
	double avg=0;
	min=max=salary[0];
	for (int i = 0; i < salary.size(); i++)
	{
		avg+=salary[i];
		if (salary[i]<min)
		{
			min=salary[i];
		}
		else if (salary[i]>max)
		{
			max=salary[i];
		}
	}
	avg=avg-min-max;
	return avg/(salary.size()-2);
}

int main(){
	vector<int> n={4000,3000,1000,2000};
	cout<<average(n)<<endl;
}