#include<iostream>
using namespace std;
int main(){
	int size = 5;
	int arr[size] = { 1,2,3,4,5};
	for (int i=0 ; i<size ; i++){
		for(int j = i +1;  j<size ; j++){
			cout<< arr[i] << " " <<arr[j];
		}
		cout<<endl;
	}
}