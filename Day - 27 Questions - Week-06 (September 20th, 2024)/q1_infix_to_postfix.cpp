#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char x) {
    return (x == '^' || x == '*' || x == '-' || x == '+' || x == '/');
}

int precedence(char x) {
    switch (x) {
        case '^': return 3;
        case '*': return 2;
        case '/': return 2;
        case '+': return 1;
        case '-': return 1;
        default: return 0;
    }
}

string infix_to_postfix_conversion(string infix) {
    stack<char> stk;
    string postfix_expr("");
    string current_element("");
    for (char ch: infix) {
        if (ch == ' ') {
            continue;
        } else if (isdigit(ch) || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            current_element += ch;
        } else {
            if (!current_element.empty()) {
                postfix_expr += current_element + " ";
                current_element = "";
            }
            if (ch == '(') {
                stk.push(ch);
            } else if (ch == ')') {
                while (!stk.empty() && stk.top() != '(') {
                    postfix_expr += stk.top();
                    postfix_expr += " ";
                    stk.pop();
                }
                stk.pop();
            } else if (isOperator(ch)) {
                while (!stk.empty() && precedence(stk.top()) >= precedence(ch)) {
                    postfix_expr += stk.top();
                    postfix_expr += " ";
                    stk.pop();
                }
                stk.push(ch);
            }
        }
    }
    
    if (!current_element.empty()) {
        postfix_expr += current_element + " ";
    }
    
    while (!stk.empty()) {
        postfix_expr += stk.top();
        postfix_expr += " ";
        stk.pop();
    }
    
    return postfix_expr;
}

int main() {
    string infix_expr;
    cout << "Enter Infix Expression: ";
    getline(cin, infix_expr);
    
    string postfix_expr;
    postfix_expr = infix_to_postfix_conversion(infix_expr);
    cout << "Postfix Expression: " << postfix_expr << endl;
    
    return 0;
}
