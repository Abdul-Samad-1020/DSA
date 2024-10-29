#include <iostream>
using namespace std;

const int cap = 5; 

// Stack structure
struct Stack {
    int arr[cap];
    int top;
};

// Initialize the stack
void initStack(Stack &stack) {
    stack.top = -1;
}

// Check if the stack is empty
bool isEmpty(const Stack &stack) {
    return stack.top == -1;
}

// Check if the stack is full
bool isFull(const Stack &stack) {
    return stack.top == cap - 1;
}

// Push an element onto the stack
void push(Stack &stack, int data) {
    if (isFull(stack)) {
        cout << "Stack is full. Cannot push element." << endl;
        return;
    }
    stack.arr[++stack.top] = data;
}

// Pop an element from the stack
int pop(Stack &stack) {
    if (isEmpty(stack)) {
        cout << "Stack is empty. Cannot pop element." << endl;
        return -1; // Return an error code
    }
    return stack.arr[stack.top--];
}

// Get the top element of the stack
int peek(const Stack &stack) {
    if (isEmpty(stack)) {
        cout << "Stack is empty. Cannot peek element." << endl;
        return -1; // Return an error code
    }
    return stack.arr[stack.top];
}

// Print the stack
void printStack(const Stack &stack) {
    if (isEmpty(stack)) {
        cout << "Stack is empty." << endl;
        return;
    }
    for (int i = 0; i <= stack.top; i++) {
        cout << stack.arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack stack;
    initStack(stack);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);

    cout << "Stack: ";
    printStack(stack);

    cout << "Top element: " << peek(stack) << endl;

    cout << "Popped element: " << pop(stack) << endl;

    cout << "Stack: ";
    printStack(stack);

    return 0;
}
