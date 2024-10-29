#include<iostream>
using namespace std;
void ReverseArr(int arr[],int size){
	int start=0;
	int end =size -1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	cout<<"Reverse arr: \n";
	for (int i=0; i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int size=15;
	int arr[] = { 1,2,3,4,5,6,78,9,0,2,1,1,3,4,5 };
	ReverseArr(arr, size);
}