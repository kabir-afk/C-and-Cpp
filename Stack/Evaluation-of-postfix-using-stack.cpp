#include <iostream>
#include <string>
#include <stack>
using namespace std;

int perform(int op1, int op2, char func) {
    int n3;
    if (func == '+') {
        n3 = op1 + op2;
    } else if (func == '-') {
        n3 = op1 - op2;
    } else if (func == '*') {
        n3 = op1 * op2;
    } else if (func == '/') {
        n3 = op1 / op2;
    }
    return n3;
}

string evalPostfix(string s) {
    stack<int> stk;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            stk.push(s[i] - '0');
        } else if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-') {
            int op2 = stk.top();
            stk.pop();
            int op1 = stk.top();
            stk.pop();
            int result = perform(op1, op2, s[i]);
            stk.push(result);
        }
    }
    return to_string(stk.top());
}

int main() {
    string s = "23*54*+9-";
    string a = evalPostfix(s);
    cout << a;
    return 0;
}
