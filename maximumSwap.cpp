#include <iostream>
#include <vector>
// #include <unordered_map>
#include <string>
using namespace std;

int maximumSwap(int num) {
    string numStr = to_string(num);  // Convert number to string
    unordered_map<char, int> lastIdx;  // Map to store the last index of each digit

    // Fill the map with the last occurrence of each digit
    for (int i = 0; i < numStr.size(); ++i) {
        lastIdx[numStr[i]] = i;
    }

    // Iterate through each digit and try to find a larger digit later
    for (int i = 0; i < numStr.size(); ++i) {
        // Check digits from 9 down to numStr[i] + 1
        for (char d = '9'; d > numStr[i]; --d) {
            if (lastIdx.count(d) && lastIdx[d] > i) {
                // Swap the digits
                swap(numStr[i], numStr[lastIdx[d]]);
                return stoi(numStr);  // Return the number as an integer
            }
        }
    }

    return num;  // No swap needed, return the original number
}

int main() {
    // Test cases
    cout << maximumSwap(2736) << endl;  // Output: 7236
    cout << maximumSwap(9973) << endl;  // Output: 9973
    cout << maximumSwap(1234) << endl;  // Output: 4231
    cout << maximumSwap(4321) << endl;  // Output: 4321 (No swap needed)

    return 0;
}
