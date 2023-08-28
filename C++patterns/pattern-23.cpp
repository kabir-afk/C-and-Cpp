#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number\n";
    cin>>n;
    int row = 1;
    int k = 1;
       while(row<=n){
           int space = 1;
           while(space < (n - row)){
               cout<<" ";
               space = space + 1;
            }
           int col = 1;
           while(col<= row){
               cout<<k;
               col = col + 1;
               k = k + 1;
           }
           cout<<"\n";
           row = row + 1;
       }
    return 0;
}