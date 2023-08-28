#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number\n";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A' + j -1;
            j = j+1;
            cout<< ch;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}