#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;

    cout<<"empty or not"<<d.empty()<<endl;

    cout<<d.size()<<endl;

    cout<<"before erase ";
    d.erase(d.begin(),d.begin() + 1);
    cout<<"after erase size = "<<d.size()<<endl;
    

}