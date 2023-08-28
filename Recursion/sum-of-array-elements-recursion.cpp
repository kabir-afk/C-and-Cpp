#include <iostream>
using namespace std;
int sum(int arr[],int n){
    if(n == 0){
        return 0;
    }
    int ans = arr[0] + sum(arr + 1,n - 1);
    return ans;
}
int main() {
int n;
cout<<"enter the size of array : ";
cin>>n;
int arr[n];
cout<<"enter elements of array : ";
for(int i = 0;i < n;i++){
    cin>>arr[i];
}
int ans = sum(arr,n);
cout<<ans;
    return 0;
}