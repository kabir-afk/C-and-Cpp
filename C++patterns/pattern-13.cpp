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
            //i+j-1=1
            //i+j-1+A-1=A-1+1
            //A+i+j-2=A
            char ch = 'A' + i + j  - 2;
            cout<< ch;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter a number\n";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         int k=i;
//         while(j<=n){
//             char ch = 'A' + k  - 1;
//             cout<< ch;
//             k = k + 1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }