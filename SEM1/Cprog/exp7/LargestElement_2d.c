#include <stdio.h>

int main()
{
    int a[3][3], max;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Enter the element at a[%d][%d] ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (a[i][j] > max){
                max = a[i][j];
            }
        }
    }

    printf("Largest element = %d\n", max);

    return 0;
}