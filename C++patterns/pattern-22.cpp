#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number\n";
    cin>>n;
    int row = 1;
       while(row<=n){
           int space = 1;
           while(space< row){
               cout<<" ";
               space = space + 1;
            }
           int col = 1;
            int k = row;
           while(col<= n-row+1){
               cout<<k;
               col = col + 1;
               k = k + 1;
           }
           cout<<"\n";
           row = row + 1;
       }
    return 0;
}