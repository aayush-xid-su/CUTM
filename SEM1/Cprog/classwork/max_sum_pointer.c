#include <stdio.h>

int main(){
    int a[100], n, i, max;
    int *p;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    p = a;
    max = *(p) + *(p + 1);

    for(i = 1; i < n - 1; i++){
        if(*(p + i) + *(p + i + 1) > max){
            max = *(p + i) + *(p + i + 1);
        }
    }

    printf("Maximum sum of 2 consecutive elements = %d", max);

    return 0;
}