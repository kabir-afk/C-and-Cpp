#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int arr[] = {4, 2, 0, 2, 5, 1, 3, 2, 4, 2, 0, 1, 5, 3, 1, 4};
    int n = sizeof(arr) / sizeof(int);
    int max = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    
    int count[max + 1];
    memset(count, 0, sizeof(count));
    
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    
    for (int i = 1; i <= max; i++) {
        count[i] = count[i] + count[i - 1];
    }
    
    int b[n];
    memset(b, 0, sizeof(b));
    
    for (int i = n - 1; i >= 0; i--) {
        b[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    
    return 0;
}
