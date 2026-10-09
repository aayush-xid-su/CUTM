//input Decimal and find out its binary
#include <stdio.h>
void find_binary(int);
void find_binary(int n)
{
    if (n > 1)
    {
        find_binary(n / 2);
    }
    printf("%d", n % 2);
}

int main()
{
    int num;

    printf("Enter a number to find its binary vlue : ");
    scanf("%d", &num);

    find_binary(num);

    return 0;
}