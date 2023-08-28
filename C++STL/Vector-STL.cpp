#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    //PUSH_BACK ADDS AN ELEMNT TO THE VECTOR 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    //CAPACITY REFERS TO THE MEMORY ASSIGNED TO THE VECTOR
    cout << "capacity of vector " << v.capacity() << endl;
    //SIZE REFERS TO THE NUMBER OF ELEMENTS INSIDE THAT VECTOR/ARRAY
    cout << "size of vector " << v.size() << endl;
    //POP_BACK REMOVES THE LAST ELEMENT FROM THE ARRAY/VECTOR 
    cout << "Before pop back " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "After pop back "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    //CLEAR FUNCTION DECREASES THE SIZE TO 0 BUT DOES NOT EFFECT CAPACITY i.e., MEMORY ASSIGNED REMAINS SAME  
    cout <<"\nBefore clear function\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    cout <<"After clear function\n";
    v.clear();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }//GAYAB
    cout << endl;
    cout<<"Vector a with fixed size of 5 and every element initialized as 1\n";
    vector<int>a(5,1);
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    //COPYING THE ELEMENTS OF A INSIDE VECTOR B
    vector<int>b{a};
    cout<<"copying the elements of vector a inside vector b\n"<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b.at(i)<<" ";
    }
}