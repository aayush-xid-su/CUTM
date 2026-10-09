#include <stdio.h>
int main()
{
    int n, i = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial = %lld", fact);

    return 0;
}