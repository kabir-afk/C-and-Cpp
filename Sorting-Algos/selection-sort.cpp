// SPACE COMPLEXITY : O(1)
// TIME COMPLEXITY :O(N^2)
// BETTER USE IT FOR SMALLER ARRAYS
// UNSTABLE SORTING ALGORITHM
// TRAVERSES THROUGH WHOLE ARRAY
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {14, 10, 7, 6, 1, 5};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size ; j++)
        {
            if (arr[i] >= arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}