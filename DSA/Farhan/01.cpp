#include<iostream>
using namespace std;
int findTable(int a, int size){
	cout<<"Enter number of table:  \n";
    int i=1;
   do{
   	cout<<a<<" X "<<i<<" = "<<i*a<<endl;
   	 i++;
   }
    while (i<=size);	
}
int main(){
	int table =5;
	int size = 20;
  findTable(5,20);

}