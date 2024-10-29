#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num);

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result =isPrime(num);  
    if(result){
	
    	cout << " is a prime number." ;
	} else
	cout << " is not a prime number." << endl;
    return 0;
};
bool isPrime(int num)
{
    if (num <= 1)
	 return false;
    for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) return false;
}
	return true;
}