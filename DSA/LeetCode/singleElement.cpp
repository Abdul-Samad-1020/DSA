#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> sr = { 1,2,3,4,5,6,1,2,3,4,5};
	int x=0;
	for(int val : sr){
		x ^= val;
	}
	cout<<"single Element is : "<<x;
}