#include <iostream>
#include <cstdlib>
#include <algorithm>
#include<ctime>
using namespace std;

int main() {
    int size = 100;
    int myArray[100];


    for (int i = 0; i < size; ++i) {
        myArray[i] = rand() % 1000 + 1; 
    }

    cout << "Unsorted array: \t";
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " \t";
    }

    sort(myArray, myArray + size);

    cout << "\nSorted array: \t";
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " \t";
    }

    return 0;
}