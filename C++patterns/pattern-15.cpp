#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number\n";
    cin>>n;
    int i=1, k=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch ='A'+ k - 1;
            cout<<ch;
            j = j +1;
            k = k +1;
        }
        cout<<endl;
        i =i+1;
    }
    return 0;
}