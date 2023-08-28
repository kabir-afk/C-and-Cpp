#include <iostream>
#include <vector>
using namespace std;
int firstAndlastOccurence(int arr[],int s,int e,int target){
    if(s>e){
        cout<<"-1 -1";
        return 0;
    }
     if(arr[s] == target && arr[e] == target){
         cout<<s<<" ";
         cout<<e;
         return 0;
     }
     if(arr[s] < target){
         return firstAndlastOccurence(arr,s + 1, e, target);
     }
     else{
         return firstAndlastOccurence(arr,s , e - 1, target);
     }
}
int main() {
    // int arr[9] = {1,2,3,4,4,4,4,5,6};
    // int target = 4;
    // int n = 9;
    int arr[6] = {5,7,7,8,8,10};
    int target = 6;
    int n = 6;
    
    int s = 0, e = n -1;
    firstAndlastOccurence(arr,s,e,target);
    return 0;
}