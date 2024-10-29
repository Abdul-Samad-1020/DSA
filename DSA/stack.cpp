#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
   
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1;
    }

  
    ~Stack() {
        delete[] arr;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == capacity - 1;
    }

    // Function to push an element onto the stack
    void push(int data) {
        if (isFull()) {
            cout << "Stack is full. Cannot push element." << endl;
            return;
        }
        arr[++top] = data;
    }

    // Function to pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop element." << endl;
            return -1;
        }
        return arr[top--];
    }

    // Function to get the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot peek element." << endl;
            return -1;
        }
        return arr[top];
    }

    // Function to print the stack
    void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);

    cout << "Stack: ";
    stack.printStack();

    cout << "Top element: " << stack.peek() << endl;

    cout << "Popped element: " << stack.pop() << endl;

    cout << "Stack: ";
    stack.printStack();

    return 0;
}