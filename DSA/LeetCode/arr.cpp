#include <iostream>
using namespace std;

int reverseArr()

int sum(int arr[], int size) {  // Function ---
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum; 
}

int MinElement(int arr[], int size) {  // Function--
    int min = arr[0];  
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];  
        }
    }
    return min; 
}

int MaxElement(int arr[], int size) {  // Function--
    int max = arr[0];  
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    return max; 
}
int main() {
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];  
    cout << "Enter the elements of the array:" << endl;    
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; 
    }
    int totalSum = sum(arr, size);  
    int maxElement = MaxElement(arr, size);  

    cout << "Sum of array elements: " << totalSum << endl;
    cout << "Maximum element: " << maxElement << endl;

    return 0;
}

