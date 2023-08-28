// BEST CASE TIME COMPLEXITY : O(nlogn)
// WORST CASE TIME COMPLEXITY : O(n^2)
// HOW TO CONVERT WORST CASE TO BEST CASE ??
// 1. ALWAYS CHOOSE MIDDLE ELEMENT AS PIVOT ELEMENT
// 2. CHOOSE RANDOM ELEMENT AS PIVOT ELEMENT
#include <iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int pivot = arr[start];
    int i = start,j = end;
    while(i < j){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[start]);
    return j;
}
void quickSort(int arr[],int start,int end){
    if(start < end){
        int j = partition(arr,start,end);
        quickSort(arr,start,j);
        quickSort(arr,j+1,end);   
    }
}
int main() {
int arr[]={10,5,3,9,8,7,12,16,15};
int n = sizeof(arr)/sizeof(int);
quickSort(arr,0,n-1);
cout<<endl;
for(int i = 0;i < n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}