#include <iostream>
using namespace std;
void print(int* arr,int s,int e){
    for(int i = s;i <= e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int arr[],int s,int e,int target){
    print(arr,s,e);
    if(s>e){
        return 0;
    }
    int mid = s + (e-s)/2;
    cout<<"value of our mid is "<<arr[mid]<<" "<<endl;
    if(arr[mid] == target){
        return 1;
    }
    if(arr[mid] < target){
        return binarySearch(arr,mid + 1,e,target);
    }
    else{
        return binarySearch(arr,s,mid - 1,target);
    }
}
int main() {
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    int target = 16;
     int s = 0,e = n-1;
    bool ans = binarySearch(arr,s,e,target);
    if(ans == 1){
        cout<<"Element Found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}