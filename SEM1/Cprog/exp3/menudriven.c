#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;
    char ch;

    do
    {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter first numbers: ");
            scanf("%f", &a);
            printf("Enter second numbers: ");
            scanf("%f", &b);
        }

        switch (choice)
        {
            case 1:
                result = a + b;
                printf("Sum = %.2f", result);
                break;

            case 2:
                result = a - b;
                printf("Substraction = %.2f", result);
                break;

            case 3:
                result = a * b;
                printf("Multiplication = %.2f", result);
                break;

            case 4:
                result = a / b;
                printf("division = %.2f", result);
                break;

            case 5:
                printf("Exiting");
                break;

            default:
                printf("Invalid choice");
        }

        if (choice != 5)
        {
            printf("\nDo you want to continue? (y/n): ");
            scanf(" %c", &ch);
        }
        else
        {
            ch = 'n';
        }

    } while (ch == 'y' || ch == 'Y');

    return 0;
}
