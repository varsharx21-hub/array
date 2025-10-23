#include <stdio.h>

int main() {
    int n, i, j, count=0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter elements: %d", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Duplicate elements in the array are: ");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(array[i] == array[j]) {
                count++;
            }
            if(count>1) {
            printf("%d", array[i]);
        }
    }

    return 0;
}
}
