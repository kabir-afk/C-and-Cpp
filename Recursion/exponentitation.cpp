#include <iostream>
using namespace std;
int power(int a,int b){
    if(b == 0)
        return 1;
    if(b == 1)
        return a;
    if(b%2==0)
     return power(a,b/2) * power(a,b/2);
     if(b%2!=0)
     return a*power(a,b/2) * power(a,b/2);
}
int main() {
int a,b;
cout<<"enter a number : ";
cin>>a;
cout<<"enter the power you want to raise it to : ";
cin>>b;
int ans = power(a,b);
cout<<"answer is => "<<ans;
    return 0;
}