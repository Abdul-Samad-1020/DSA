#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
private:
    Node* top; // Pointer to the top of the stack

public:
    Stack() {
        top = NULL; // Initialize stack as empty
    }

    // Push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top; // Link the new node to the current top
        top = newNode;       // Update the top pointer
        cout << value << " pushed onto the stack.\n";
    }

    // Pop an element from the stack
    void pop() {
        if (top == NULL) { // Check for stack underflow
            cout << "Stack Underflow! Cannot pop from an empty stack.\n";
            return;
        }
        Node* temp = top; // Temporarily store the current top node
        top = top->next;  // Update the top pointer to the next node
        cout << temp->data << " popped from the stack.\n";
        delete temp;      // Free the memory of the popped node
    }

    // Peek at the top element
    int peek() {
        if (top == NULL) { // Check if the stack is empty
            cout << "Stack is empty.\n";
            return -1;
        }
        return top->data;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.peek() << endl;

    stack.pop();
    stack.pop();
    stack.pop(); // Attempt to pop from an empty stack

    return 0;
}
