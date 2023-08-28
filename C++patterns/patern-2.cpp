#include <iostream>
using namespace std;
int main() {
    int n,row, col,j=1,k=1;
    cout<<"enter a number"<<endl;
    cin>>n;
    row = col = n;
    while(j<=col){
        int i=1;
        while(i<=row){
            cout<<k;
            i=i+1;
        }
        cout<<"\n";
        j=j+1;
        k=k+1;
    }
    return 0;
}