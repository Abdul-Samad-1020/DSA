#include <iostream>
using namespace std;
int main() {
    int ArrA[4];
    int ArrB[4];
    
    cout << "Enter the Element of Array1: ";
    
	for (int i=0;i<4;i++){
    	cin>>ArrA[i];
	}

    for (int i = 0; i < 4; i++) {
        ArrB[3 - i] = ArrA[i];
    }

    	cout << "Array 1: ";
    for (int i = 0; i < 4; i++) {
    	cout << ArrA[i] << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < 4; i++) {
        	cout << ArrB[i] << " ";
    }
    	cout << endl;

    return 0;
}