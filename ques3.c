#include<stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array1[n], array2[n];
    printf("Enter elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    for(i = 0; i < n; i++) {
        array2[i] = array1[i];
    }

    printf("Elements copied to second array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}