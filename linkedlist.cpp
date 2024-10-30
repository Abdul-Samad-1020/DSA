#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Function to get the length of the linked list
int getLength(Node *head) {
    int len = 0;
    Node *curr = head;
    while (curr != nullptr) {
        len++;
        curr = curr->next;
    }
    return len;
}

// Function to perform bubble sort on the linked list
Node *bubbleSort(Node *head) {
    if (head == nullptr) return nullptr;

    Node *currNode;
    int len = getLength(head);
    bool swapped;

    for (int i = 0; i < len - 1; i++) {
        currNode = head;
        swapped = false;

        while (currNode->next != nullptr) {
            if (currNode->data > currNode->next->data) {
                // Swap data instead of nodes
                swap(currNode->data, currNode->next->data);
                swapped = true;
            }
            currNode = currNode->next;
        }

        // If no swaps occurred, the list is sorted
        if (!swapped) {
            break;
        }
    }
    
    return head;
}

void printList(Node *curr) {
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;  // Newline for better readability
}

void cleanup(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        Node *temp = curr;
        curr = curr->next;
        delete temp;
    }
}

int main() {
    // Create a hard-coded linked list: 5 -> 1 -> 32 -> 10 -> 78
    Node *head = new Node(5);
    head->next = new Node(1);
    head->next->next = new Node(32);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(78);

    head = bubbleSort(head);
    printList(head);

    cleanup(head);  // Clean up memory
    return 0;
}

