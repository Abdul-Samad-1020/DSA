#include<iostream>
using namespace std;
int main()
{
	int size=5;
	int arr[size] = {3,34,7,9,-4};
	int index;
//	cout<<"enter elements of array "<< size <<" : ";
//	for (int i=0;i<size;i++){
//		cin>>arr[i];
//	}
	
	cout<<" elements of array are "  <<" : ";
	for (int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
	int smallest=INT_MAX;//int max means +infinity it store +infinte value
	for(int i=0;i<size;i++)
	{
		if(arr[i]<smallest){
			smallest=arr[i];
		index = i;
		}
	}
	cout<<"smallest = "<<smallest<<endl;
	cout<<" index at is "<<index<<endl;
	
	int largest=INT_MIN; //int min means -infinity it store -infinte value
	for(int i=0;i<size;i++)
	{
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<"Largest element is :"<< largest;
}