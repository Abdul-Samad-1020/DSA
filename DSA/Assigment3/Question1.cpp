#include<iostream>
using namespace std;
    int arr[5]; 
    int top=-1;
    int size;
    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int data) {
        if (isFull()) {
            cout << "Stack is full:" << endl;
            return;
        }
        arr[++top] = data;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty:." << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top];
    }


int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    cout << "Top element: " << peek() << endl;
    cout << "Is stack empty? " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Popped element: " << pop() << endl;
    cout << "Top element: " << peek() << endl;
    cout << "Is stack empty? " << (isEmpty() ? "Yes" : "No") << endl;
    return 0;
}