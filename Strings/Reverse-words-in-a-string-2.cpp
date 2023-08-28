#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter a string\n";
    getline(cin,s);
    int start = 0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i] == ' '){
            reverse(s.begin()+start,s.begin()+i);
            start = i + 1;
        }
    }
    reverse(s.begin()+start,s.end());
    cout<<s;
}