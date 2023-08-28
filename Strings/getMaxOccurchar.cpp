#include<iostream>
#include<string>
using namespace std;
int main(){
    string word;
    cout<<"enter a word\n";
    cin>>word;
    // to track record of occurence of letters
    int arr[26]={};
    int number = 0;
    for(int i=0;i<word.length();i++){
        char ch = word[i];
        number = ch - 'a';
        arr[number]++;
    }
    // to find max occurence of char
    int max = -1, ans = 0;
    for(int i = 0;i < 26;i++){
        if(arr[i] > max){
            ans = i;
            max = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    cout<<finalAns;
}