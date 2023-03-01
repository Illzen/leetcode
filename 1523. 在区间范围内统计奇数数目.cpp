#include<iostream>

using namespace std;

int countOdds(int low, int high)
{
	if (low%2)
	{
		low--;
	}
	if (high%2)
	{
		high++;
	}
	return (high-low)/2;
}

int main(int argc, const char** argv) {
	return 0;
}