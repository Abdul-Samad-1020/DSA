#include <iostream>
#include <cstdlib>
#include <algorithm>
#include<ctime>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
	
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1;
}

int main() {
    int size = 100;
    int myArray[100];
    srand(time(0));

    for (int i = 0; i < size; ++i) {
        myArray[i] = rand() % 1000 + 1; 
    }

    cout << "Unsorted array: \n";
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " \n";
    }
    
    sort(myArray, myArray + size);

    cout << "\nSorted array: \n";
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " \n";
    }

    int target;
    cout << "Enter a number to search: ";
    cin >> target;

    int index = binarySearch(myArray, 0, size - 1, target);

    if (index != -1) {
        cout << "Number found at index " << index << endl;
    } else {
        cout << "Number not found in the array" << endl;
    }

    return 0;
}