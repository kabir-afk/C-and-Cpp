#include <iostream>
using namespace std;
int main() {
    int n,i=1;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< " * ";
            j=j+1;
        }
        i=i+1;
        cout<<"\n";
    }
    return 0;
}