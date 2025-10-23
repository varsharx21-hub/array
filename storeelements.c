#include<stdio.h>

int main() {
    int n,i;
    printf("enter the number of elemnts you wantto store :");
    scanf("%d", &n);

    int array[n];
    printf("enter the elements \n");
    for(int i=1; i<=n; i++) {
        scanf("%d", &array[i]);
    }
    printf("the entered elements are");
    for(int i=1; i<=n; i++) {
    printf("\n %d", array[i]);
    }
    return 0;
    }

