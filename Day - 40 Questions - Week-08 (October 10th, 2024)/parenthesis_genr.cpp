#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct State {
    string current;
    int open;
    int close;
};

void generateParenthesis(int n) {
    stack<State> states;
    states.push({"", 0, 0});

    while (!states.empty()) {
        State s = states.top();
        states.pop();

        if (s.current.length() == 2 * n) {
            cout << s.current << endl;
            continue;
        }

        if (s.open < n) {
            states.push({s.current + "(", s.open + 1, s.close});
        }

        if (s.close < s.open) {
            states.push({s.current + ")", s.open, s.close + 1});
        }
    }
}

int main() {
    int n;
    cout << "Enter number of pairs: ";
    cin >> n;

    cout << "Parentheses:" << endl;
    generateParenthesis(n);

    return 0;
}

/*
    Ques 1. You are working as a software developer for a company that creates data validation systems. One of the key components of your system is ensuring that data entries with brackets or parentheses are correctly formatted. This involves making sure that every opening parenthesis has a corresponding closing parenthesis and that they are properly nested.

    Your task is to write a function that generates all possible valid combinations of parentheses for a given number of pairs.
    
    For example, given n pairs of parentheses, you need to generate all valid sequences of well-formed parentheses. This function will be used to automatically generate test cases for your system to validate different bracketed structures.
    
    Implement a function to generate all combinations of well-formed parentheses.
    Example:
    Input:
    
    n = 3 (3 pairs of parentheses)
    Output:
    
    ["((()))", "(()())", "(())()", "()(())", "()()()"]
    Explanation:
    For n = 3, there are 3 pairs of parentheses, and you need to generate all possible valid sequences where the parentheses are correctly matched. The output will be a list of all such valid combinations.
*/
