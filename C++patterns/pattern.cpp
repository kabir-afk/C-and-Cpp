#include <iostream>
using namespace std;
int main() {
    int n,j=1;
    cout<<"enter a number"<<endl;
    
    cin>>n;
    while(j<=n)
    { int i=1;
        while(i<=n)
        {
            cout<<"*";
            i = i + 1;
        }
        cout<<endl;
        j = j + 1;
    }
    return 0;
}