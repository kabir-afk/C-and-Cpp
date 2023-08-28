//TIME COMPLEXITY: O(2^N) where N is the size of array
#include <iostream>
using namespace std;
void fun(int n){
    if(n>0){
        fun(n-1);
        cout<<n<<" ";
        fun(n-1);
    }
}

int main() {
    int n;
    cout<<"enter a number : ";
    cin>>n;
    fun(n);
    return 0;
}