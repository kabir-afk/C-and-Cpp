#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("kabir");
    s.push("karan");
    s.push("singh");

    cout<<"top element before pop => "<<s.top()<<endl;
    s.pop();
    cout<<"top element after pop => "<<s.top()<<endl;
    cout<<"size of stack => "<<s.size()<<endl;



}