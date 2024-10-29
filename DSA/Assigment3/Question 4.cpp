#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int precedence(char op) {
    if (op == '+' || op == '-'){
	return 1;
	}
    if (op == '*' || op == '/') {
	return 2;
	}
    return 0;
}
void infixToPostfix(char infix[], char postfix[]) {
    char stack[MAX_SIZE];
    int top = -1;
    int j = 0; 
    for (int i = 0; infix[i] != '\0'; i++) {
        if (infix[i] == ' ') continue; 

        if (isalnum(infix[i])) { 
            postfix[j++] = infix[i]; 
        } else if (infix[i] == '(') { 
            stack[++top] = infix[i]; 
        } else if (infix[i] == ')') { 
            for ( ; top != -1 && stack[top] != '('; top--) {
                postfix[j++] = stack[top]; 
            }
            top--;
        } else { 
            while (top != -1 && stack[top] != '(' && precedence(infix[i]) <= precedence(stack[top])) {
                postfix[j++] = stack[top--]; 
            }
            stack[++top] = infix[i]; 
        }
    }

   
    while (top != -1) {
        postfix[j++] = stack[top--]; 
    }
    postfix[j] = '\0';
}
int main() {
    char infix[] = "A + B * (C - D)";
    char postfix[MAX_SIZE];
    infixToPostfix(infix, postfix);
    cout << "Infix: " << infix << std::endl;
  cout << "Postfix: " << postfix << std::endl;
    return 0;
}