#include <stdio.h>
int main()
{
    float marks, percentage;

    printf("Enter total marks obtained: ");
    scanf("%f", &marks);
    percentage = marks;

    if (percentage >= 90)
        printf("Grade = A+");
    else if (percentage >= 80)
        printf("Grade = A");
    else if (percentage >= 70)
        printf("Grade = B");
    else if (percentage >= 60)
        printf("Grade = C");
    else if (percentage >= 50)
        printf("Grade = D");
    else if (percentage >= 40)
        printf("Grade = E");
    else
        printf("Grade = F");

    return 0;
}