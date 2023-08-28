#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    int i, j, k = n;

    // Outer loop to handle number of rows
    // n in this case
    for (i = 1; i <= n; i++)
    {
        // Inner loop for columns
        for (j = 1; j <= n; j++)
        {

            // Condition to print star pattern
            if (j >= k)
                cout << "* ";
            else
                cout << " ";
        }
        k--;
        cout << "\n";
    }
    return 0;
}