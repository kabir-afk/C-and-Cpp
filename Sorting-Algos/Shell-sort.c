#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {53, 16, 9, 71, 21, 32, 86, 64, 40};
    int n = sizeof(arr)/sizeof(int);
    for (int gap = n/2; gap >= 1; gap = gap / 2)
    {
        for (int j = gap; j < n; j++)
        {
            for (int i = j - gap; i >=0 ; i--)
            {
                if(arr[i] < arr[i + gap] ){
                    break;
                }
                else
                {
                    int temp = arr[i];
                    arr[i] = arr[i + gap];
                    arr[i + gap] = temp;
                }   
            }   
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}