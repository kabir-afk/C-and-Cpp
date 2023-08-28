#include <iostream>
#include <array>
using namespace std;
int main()
{
    int basic[3] = {0, 1, 2};
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << "element at start " << a.front() << endl;
    cout << "element at end " << a.back() << endl;
    cout << "element at index 2 is " << a.at(2) << endl;
    cout << "is array empty = ";
    if (a.empty() == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}