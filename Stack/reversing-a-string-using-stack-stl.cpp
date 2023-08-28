// string reversal using stack
#include <iostream>
#include <string>
#include <stack>
using namespace std;

string reverse(string c,int n){
    stack<char>s;
    // loop for push
    for(int i = 0;i < n;i++){
        s.push(c[i]);
    }
    // loop for pop
    for(int i = 0;i < n;i++){
        c[i] = s.top();
        s.pop();//perform pop 
    }
    return c;
}

int main() {
string c;
cout<<"enter a string : ";
cin>>c;
string a = reverse(c,c.length());
cout<<"reversed string = "<<a<<endl;
    return 0;
}