#include <iostream>
using namespace std;
int main() {
    int n,i=1,k=1;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<< k <<" ";
            k=k+1;
            j=j+1;
        }
        i=i+1;
        cout<<"\n";
    }
    return 0;
}