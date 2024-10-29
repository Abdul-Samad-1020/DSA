#include <iostream>
using namespace std;
const int size = 100;
int factorial(int n) {
int stack[size];
int top = -1;
int result = 1;
for (int i = n; i > 0; i--) {
    stack[++top] = i;
}
for (int i = 0; i <= top; i++) {
    result *= stack[i];
}
return result;
}
int main() {
int n;
cout<<"Enter the number: ";
cin>>n;
int result = factorial(n);
cout << "Factorial of " << n << " is " << result << std::endl;


}
