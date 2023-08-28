#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number\n";
    cin>>n;
    int row = 1;
    while(row<=n){
        // first triangle
        int col = 1;
        while(col<= (n - row +1)){
            cout<<col;
            col = col + 1;
        }
        // 2nd triangle
        int count = row - 1;
        while(count){
            cout<<"**";
            count = count - 1;
        }
        // 3rd triangle
        int k = n - row + 1;
        while(k){
            cout<<k;
            k = k - 1;
        }
        
        cout<<endl;
        row = row +1;
    }
   return 0;
}