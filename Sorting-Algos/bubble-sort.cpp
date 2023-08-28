// SPACE COMPLEXITY : O(1)
// TIME COMPLEXITY :O(N^2)
// BEST CASE TIME COMPLEXITY :O(N) {--IN CASE ARRAY IS ALREADY SORTED--}
// WORST CASE TIME COMPLEXITY :O(N^2)
// BETTER USE IT FOR SMALLER ARRAYS
// STABLE SORTING ALGORITHM
// SWAPS ADJACENT ELEMENTS AS PER CONDITION
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {14, 10, 7, 6, 1, 5};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}