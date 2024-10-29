#include <iostream>
using namespace std;
// Node class representing a node in the linked list
class Node {
public:
    int value;
    Node* next;

    Node(int val) {
        value = val;
        next = nullptr;
    }
};

// Stack class representing a stack implemented using a linked list
class Stack {
private:
    Node* top;
    int size;

public:
    Stack() {
        top = nullptr;
        size = 0;
    }

    // Push a new element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        size++;
    }

    // Pop the top element from the stack
    int pop() {
        if (isEmpty()) {
            throw std::runtime_error("Cannot pop from an empty stack");
        }
        int value = top->value;
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
        return value;
    }

    // Peek at the top element without removing it
    int peek() {
        if (isEmpty()) {
            throw std::runtime_error("Cannot peek an empty stack");
        }
        return top->value;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Get the size of the stack
    int getSize() {
        return size;
    }

    // Destructor to free allocated memory
    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main() {
    Stack stack;

    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Stack size: " << stack.getSize() << endl;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    cout << "Stack size: " << stack.getSize() << endl;
    cout << "Top element: " << stack.peek() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Stack size: " << stack.getSize() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Stack size: " << stack.getSize() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Stack size: " << stack.getSize() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Stack size: " << stack.getSize() << endl;

    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}