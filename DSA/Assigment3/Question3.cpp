#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
using namespace std;
bool isBalanced(char* str) {
    char stack[MAX_SIZE];
    int top = -1;
    for (char * p = str; *p != '\0'; p++) {
        if (*p == '(' || *p == '{' || *p == '[') {
            stack[++top] = *p;
        } else if (*p == ')' || *p == '}' || *p == ']') {
            if (top == -1) {
                return false; 
            }

            char openingBracket = stack[top--];

            if ((*p == ')' && openingBracket != '(') ||
                (*p == '}' && openingBracket != '{') ||
                (*p == ']' && openingBracket != '[')) {
                return false; 
            }
        }
    }

    return top == -1;
}

int main() {
    char input[100];
    cout << "Enter a string of parentheses: ";
  cin >> input;

    if (isBalanced(input)) {
        cout << "Balanced" ;
    } else {
        cout << "Unbalanced" ;
    }

    return 0;
}