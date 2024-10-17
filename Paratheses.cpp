#include<iostream>
#include<string>
#include<stack>
using namespace std;

//0310-1530132 dr-taimoor: 

bool isValid(string str) {
    int n = str.size();
    stack<char> st;
    bool ans = true;

    for (int i = 0; i < n; i++) {
        if (str[i] == '{' || str[i] == '(' || str[i] == '[') {
            st.push(str[i]);
        }
        else if (str[i] == '}') {
            if (!st.empty() && st.top() == '{') {
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        }
        else if (str[i] == ')') {
            if (!st.empty() && st.top() == '(') {
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        }
        else if (str[i] == ']') {
            if (!st.empty() && st.top() == '[') {
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        }
    }

    // If the stack is not empty, that means there are unmatched opening brackets
    if (!st.empty()) {
        return false;
    }
    
    return ans;
}

int main() {
    string s = "{([])}";

    if (isValid(s)) {
        cout << "Valid String  :" <<s<< endl;
    }
    else { 
        cout << "Invalid String" << endl;
    }

    return 0;
}
