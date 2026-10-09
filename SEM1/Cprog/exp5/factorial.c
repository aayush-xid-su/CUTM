#include <stdio.h>
int findfactorial(int);
int findfactorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * findfactorial(n - 1);
}

int main()
{
    int num;
    printf("Enter a number to find its factorial : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of a negative number doesn't exist.\n");
    }else{
        printf("Factorial of %d = %d\n", num, findfactorial(num));
    }

    return 0;
}