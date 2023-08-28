#include <iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"size of array = "<<n<<endl;
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
string foundNotfound(int* arr,int size,int target){
    print(arr,size);
    string found ="Found";
    string Notfound ="Not found";
    if(size == 0)
    return Notfound;
    if(arr[0] == target){
        return found;
    }
    else {
        return foundNotfound(arr +1 ,size - 1,target);
    }
}
int main() {
    int arr[5] ={1,2,3,4,5};
    int n = 5;
    int target = 6;
    string ans = foundNotfound(arr,n,target);
    cout<<ans;
    return 0;
}