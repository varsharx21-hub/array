#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Frequency of each element:\n");
    for(i = 0; i < n; i++) {
        count = 1;

        int alreadyCounted = 0;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                alreadyCounted = 1; 
                break;
            }
        }
        if(alreadyCounted == 0) {
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}