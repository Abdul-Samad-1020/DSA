#include <iostream>
using namespace std;
int main() {
    int array[5] = {4, 2, 5, 3, 1};
    int temp;
   
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
   
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
