#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n, i, j, temp;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for(i = 0; i < n; i++) {
        c[n + i] = b[i];
    }

    for(i = 0; i < 2 * n; i++) {
        for(j = i + 1; j < 2 * n; j++) {
            if(c[i] < c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("Merged array in descending order:\n");
    for(i = 0; i < 2 * n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}