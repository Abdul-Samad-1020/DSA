#include<iostream>
using namespace std;
int main(){
	int n =5;
	int arr[n] = { 1,2,3,4,5,6 };
	int Currentsum =0;
	cout<<arr[5];
	int MAxsum = INT_MIN;
	for (int i =0; i<n; i++){
		Currentsum += arr[i];
		MAxsum = max(Currentsum ,MAxsum);
		if(Currentsum<0){
			Currentsum=0;
		}
	}	
		
}
