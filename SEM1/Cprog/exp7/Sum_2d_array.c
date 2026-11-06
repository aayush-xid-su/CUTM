#include <stdio.h>

int main()
{
    int a[3][3], sum = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Enter the element at a[%d][%d]",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}