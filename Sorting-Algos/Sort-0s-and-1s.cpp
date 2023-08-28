#include <iostream>
using namespace std;
int main() {
int arr[]={0,1,1,0,0,1,1,0,1,1,0,0,1};
int size=sizeof(arr)/sizeof(int);
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            // break;
        }
    }
}
for(int i=0;i<size;i++){
    cout<<arr[i];
}
    return 0;
}