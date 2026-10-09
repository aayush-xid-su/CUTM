#include <stdio.h>
void find_PrimeFactorization(int n)
{
    while (n % 2 == 0)
    {
        printf("%d ", 2);
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }

    if (n > 2)
    {
        printf("%d", n);
    }
}
int main()
{
    int num;
    printf("Enter a number to find its factorization : ");
    scanf("%d", &num);

    printf("Prime factors: ");
    find_PrimeFactorization(num);
    printf("\n");

    return 0;
}