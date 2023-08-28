#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("karan");
    q.push("and");
    q.push("kabir");
    cout<<"first element before pop=> "<<q.front()<<endl;
    q.pop();
    cout<<"first element after pop=> "<<q.front()<<endl;
} 