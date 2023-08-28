#include <iostream>
using namespace std;
int main() {
    int row,col;
    cout<<"enter the no. of rows\n";
    cin>>row;
    cout<<"enter the no. of cols\n";
    cin>>col;
    int **arr = new int*[row];
    // creating 2d array dynamically
    for(int i = 0;i < row;i++){
        arr[i] = new int[col];
    }
    // taking input values
    cout<<"enter input values\n";
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cin>>arr[i][j];
        }   
    }
    cout<<endl;
    cout<<"2D array is as follows:-\n"
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cout<<arr[i][j]<<" ";
        }   
        cout<<endl;
    }
    // releasing memory manually from heap memory
    for(int i = 0;i < row;i++){
        delete[]arr[i];
    }
    delete[]arr;
    return 0;
}