// SPACE COMPLEXITY : O(1)
// TIME COMPLEXITY :O(N^2)
// BETTER USE IT FOR SMALLER ARRAYS
// STABLE SORTING ALGORITHM
//ADAPTABLE AS WELL AS DYNAMIC ALGORITHM
// WE COMPARE CURRENT ELEMENT WITH ITS PREVIOUS ELEMENT AND SHIFT ELEMENTS INDICES' BY ONE 
#include <iostream>
using namespace std;
int main() {
    int arr[]={14,10,7,6,1,5};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}