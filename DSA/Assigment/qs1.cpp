#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;         // Array to store stack elements
    int top;          // Index of the top element in the stack
    int capacity;     // Maximum capacity of the stack

public:
    // Constructor to initialize the stack with a fixed capacity
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];  // Dynamically allocate memory for stack
        top = -1;  // Stack is empty initially
    }

    // Destructor to free the memory allocated for the stack
  
    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if the stack is full
    bool isFull() {
        return top == capacity - 1;
    }

    // Push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        arr[++top] = value;
        cout << "Pushed " << value << " onto the stack. \n";
    }

    // Pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop." << endl;
            return;
        }
        cout << "Popped " << arr[top--] << " from the stack." << endl;
    }

    // Peek at the top element of the stack (without removing it)
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot peek." << endl;
            return false; // Return an invalid value if the stack is empty
        }
        return arr[top];  // Return the data of the top element
    }
};

int main() {
    // Create a stack with a capacity of 5
    Stack stack(5);

    // Demonstrating push and pop operations
    stack.push(10);  // Push 10
    stack.push(20);  // Push 20
    stack.push(30);  // Push 30
    stack.push(40);  // Push 40
    stack.push(50);  // Push 50

    // Try pushing when the stack is full
    stack.push(90);  // Should show Stack Overflow

    // Peek at the top element
    cout << "Top element (peek): " << stack.peek() << endl;

    // Pop elements from the stack
    stack.pop();  // Pop 50
    stack.pop();  // Pop 40
    stack.pop();  // Pop 30
    stack.pop();  // Pop 20
    stack.pop();  // Pop 10

    // Try popping from an empty stack
    stack.pop();  // Should show Stack Underflow

    return 0;
}
