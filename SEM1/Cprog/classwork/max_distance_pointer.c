#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    int n, i, max, d;
    char *p;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter character elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }

    p = a;
    max = abs(*(p) - *(p + 1));

    for(i = 1; i < n - 1; i++)
    {
        d = abs(*(p + i) - *(p + i + 1));

        if(d > max)
        {
            max = d;
        }
    }

    printf("Maximum distance = %d", max);

    return 0;
}