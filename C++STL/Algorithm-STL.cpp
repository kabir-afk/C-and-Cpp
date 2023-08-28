#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(9);
    v.push_back(6);
    cout << "finding 2 using binary search => " << binary_search(v.begin(), v.end(), 2) << endl;
    cout << "lower bound => " << lower_bound(v.begin(), v.end(), 2) - v.begin() << endl;
    cout << "upper bound => " << upper_bound(v.begin(), v.end(), 2) - v.begin() << endl;
    int a = 3, b = 5;
    cout << "max of a and b => " << max(a, b) << endl;
    cout << "min of a and b => " << min(a, b) << endl;
    string s = "abcd";
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    cout<<"before rotating the vector\n";
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }cout<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotation\n";
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}