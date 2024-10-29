#include<iostream>
using namespace std;
int LinearSearch(int arr[], int target,int size ){
	for (int i=0;i<size;i++){
		if(arr[i]==target)
		return i;
	}
	return -1;
	
}
int main(){
	int size =8;
	int  arr[size]= {1,2,3,4,5,5,6,67};
	int target =8;
	int output=LinearSearch(arr,3,8);
	cout<<"indeci" << output;
}