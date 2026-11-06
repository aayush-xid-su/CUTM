#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], product[2][2] = {0};

    printf("Enter first matrix elements:\n");

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Enter the element at a[%d][%d] ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix elements:\n");

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Enter the element at a[%d][%d] ",i,j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++){
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Multiplication of two matrices:\n");

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}