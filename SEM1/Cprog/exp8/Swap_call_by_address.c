#include <stdio.h>

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter the Second number : ");
    scanf("%d",&b);

    printf("Before swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    swap(&a, &b);
    printf("\n");

    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}