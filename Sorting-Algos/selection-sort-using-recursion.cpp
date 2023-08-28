// selelction sort using recursion
#include <iostream>
using namespace std;
void sortArray(int arr[],int n,int i){
    if(i == n - 1){
        return;
    }
    for(int j = i + 1;j < n;j++){
        if(arr[i] > arr[j]){
            swap(arr[i],arr[j]);
        }
    }
    sortArray(arr,n ,i + 1);
}
int main() {
int arr[]={-2,3,90,12,55};
int n = sizeof(arr)/sizeof(int);
int i = 0;
sortArray(arr,n,i);
for(int i = 0;i < n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}