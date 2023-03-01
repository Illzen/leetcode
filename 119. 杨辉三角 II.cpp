#include<iostream>
#include <vector>

using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> row;
    row.push_back(1);
    for(int i=1;i<=rowIndex;i++){
        for(int j=i-1;j>0;j--){
            row[j]=row[j-1]+row[j];
        }
        row.push_back(1);
    }
    return row;
}
int main(int argc, const char** argv) {
	return 0;
}