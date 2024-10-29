#include<iostream>
#include<vector>
using namespace std;
int main(){
//	vector <int> vc ={1,2,3};
//	cout<<vc[2];
vector <string> str = { "ali","hamza","samad","ibrar","ahasan","Ihsan","saif"};
str.push_back("abdul");
cout<<"Size = "<< str.size()<<endl;

for(string i: str){
	cout<< i<<endl;
}
}