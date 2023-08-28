#include <iostream>
using namespace std;
void reverse(string &s,int i, int j){
    if(i > j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
int main() {
    string s;
    cout<<"enter a string : ";
    cin>>s;
    string temp = s;
    int len = s.length();
    int i = 0;
    reverse(s,i,len-1);
    if(temp == s){
        cout<<"it is a palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}