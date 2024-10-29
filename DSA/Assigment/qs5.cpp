#include <iostream>
#include <stack>
using namespace std;

int factorial(int n) {
    stack<int> s;  // Step 1: Create a stack to simulate the function calls
    int result = 1;  // Step 2: Initialize result as 1, since 1 is the starting value for multiplication
    
    // Step 3: Push values onto the stack (this simulates the recursive calls)
    while (n > 1) {
        s.push(n);  // Push the current value of n onto the stack
        n--;        // Decrement n to simulate the recursive step (n - 1)
    }
    
    // Step 4: Pop values from the stack and multiply them to get the result (this simulates "unwinding" the recursion)
    while (!s.empty()) {
        result *= s.top();  // Multiply the result by the top value of the stack
        s.pop();             // Pop the top value from the stack
    }

    return result;  // Step 5: Return the final result
}

int main() {
    int n = 5;  // Example: we want to calculate 5!
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
