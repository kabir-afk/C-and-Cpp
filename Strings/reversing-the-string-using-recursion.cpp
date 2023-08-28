#include <iostream>
using namespace std;
void reverse(string s, int len){
    if(len == 0){
        return;
    }
    cout<<s[len-1];
    reverse( s,--len);
}
int main() {
    string s;
    cout<<"enter a string : ";
    cin>>s;
    int len = s.length();
    reverse(s,len);
    return 0;
}