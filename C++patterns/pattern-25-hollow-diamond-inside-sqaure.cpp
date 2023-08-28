#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:\n";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        // 1st triangle
        for (int col = 1; col <= (n - row + 1); col++)
        {
            cout << "*";
        }
        // 2nd triangle
        int space = row - 1;
        while (space)
        {
            cout << "  ";
            space = space - 1;
        }
        // 3rd triangle
        for (int col = 1; col <= (n - row + 1); col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 1; row <= n; row++)
    {
        // 4th triangle
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        for (int col = 1; col < (n - row + 1); col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}