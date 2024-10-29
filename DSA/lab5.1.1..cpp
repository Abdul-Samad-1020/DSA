#include<iostream>
using namespace std;
bool is_Empty();
bool isFull();
void push(int data);
int main(){
	const int size;
	int top;
	return 0;
}
bool is_Empty(){
	return top ==-1;
}
bool isFull(){
	return top==size-1;
}
 void push(int data) {
        if (isFull()) {
            cout << "Stack is full. Cannot push element." << endl;
            return ;
        }
        arr[++top] = data;
       
    }
