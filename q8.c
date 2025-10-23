#include <stdio.h>

int main() {
    int n, i, min, max;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    min = max = arr[0];  // Initialize min and max

    for(i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }

    printf("Min: %d\nMax: %d\n", min, max);

    return 0;
}