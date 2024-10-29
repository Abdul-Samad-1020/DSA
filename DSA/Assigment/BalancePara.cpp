#include<iostream>
#include<String>
#include<stack>
using namespace std;

bool isValid(string str){
	int n = str.size();
	stack<char> st;
	bool ans= true;
	for (int i=0;i<n ; i++){
		if(str[i] =="{" or str[i] == "(" or str[i]== "[" )
		st.push(str[i]);
		else if(str[i] == "}" ){
			if(!st.empty() and st.Top() == "{")
			st.pop();
		else {
			ans = false;
			break;
		}
	}
		else if(str[i] == ")" ){
			if(!st.empty() and st.Top() == "(")
			st.pop();
		else {
			ans = false;
			break;
		}
	}
		else if(str[i] == "]" ){
			if(!st.empty() and st.Top() == "[")
			st.pop();
		else {
			ans = false;
			break;
		}
	}
	}
	if(!st.empty() )
	return false;
	else 
	return ans;
}
int main(){
	string str ="{([])}";
	
	if(str.isValid())
	{
		cout<<"Valid String";
	}
	else
	{ 
		cout<<"invalid string";
	}
	return 0;
}