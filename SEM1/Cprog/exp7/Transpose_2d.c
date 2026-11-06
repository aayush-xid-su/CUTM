#include <stdio.h>

int main(){
    int a[3][3], transpose[3][3];

    printf("Enter 9 elements:\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Enter the element at a[%d][%d] ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Original matrix: \n");
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix:\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}