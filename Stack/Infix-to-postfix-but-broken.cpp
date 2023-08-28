// Infix to Postfix using stack
#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool checkOperator(char incoming_op,char top){
    if((incoming_op == '*' || incoming_op == '/') && (top == '+' || top == '-')){
        return 1;
    }
    return 0;
}

string InfixToPostfix(string s){
    string postfix = "";
    stack<char>a;
    for(int i = 0;i < s.length();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            postfix += s[i]; 
        }
        else if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-'){
            if(a.empty() || checkOperator(s[i],a.top()) == true){
                a.push(s[i]);
            }
            else if(checkOperator(s[i],a.top()) == false){
                postfix += a.top();
                a.pop();
                a.push(s[i]);
            }
        }
    }
    while (!a.empty()) {
        postfix += a.top();
        a.pop();
    }
    return postfix;
}

int main() {
string s = "A+B*C-D*E";
string a = InfixToPostfix(s);
cout<<a;
    return 0;
}