#include <iostream>

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
            std::cout << "Stack Underflow! Cannot pop from an empty stack." << std::endl;
            return -1;  // Returning a sentinel value indicating an error
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
            std::cout << "Stack is empty! Cannot peek." << std::endl;
            return -1;  // Returning a sentinel value indicating an error
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
    
};

int main() {
    Stack S;

    // Check if the stack is empty and display its size
    std::cout << "Is stack empty? " << (S.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "Stack size: " << S.getSize() << std::endl;

    // Push elements onto the stack
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);

    // Display the stack size and top element
    std::cout << "Stack size: " << S.getSize() << std::endl;
    std::cout << "Top element: " << S.peek() << std::endl;

    // Pop elements and display the updated stack size
//    std::cout << "Popped element: " << S.pop() << std::endl;
//    std::cout << "Stack size: " << S.getSize() << std::endl;
//
//    std::cout << "Popped element: " << S.pop() << std::endl;
//    std::cout << "Stack size: " << S.getSize() << std::endl;
//
//    std::cout << "Popped element: " << S.pop() << std::endl;
//    std::cout << "Stack size: " << S.getSize() << std::endl;

    std::cout << "Popped element: " << S.pop() << std::endl;
    std::cout << "Stack size: " << S.getSize() << std::endl;

    // Check if the stack is empty after popping all elements
//    std::cout << "Is stack empty? " << (S.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
