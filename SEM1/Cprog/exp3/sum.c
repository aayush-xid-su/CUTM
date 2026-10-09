#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    printf("Sum of first %d natural number is = %d",n, sum);

    return 0;
}