#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number\n";
    cin>>n;
    int row = 1;
       while(row<=n){
           int space = n - row;
           while(space){
               cout<<" ";
               space = space - 1;
            }
           int col = 1;
           while(col<= row){
               cout<<row;
               col = col + 1;
           }
           cout<<"\n";
           row = row + 1;
       }
    return 0;
}