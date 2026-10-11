#include <stdio.h>

void Entermark(int marks[], int n);
void displayMarks(int marks[], int n);
void Average(int marks[], int n);
void HighestLowest(int marks[], int n);
void count(int marks[], int n);
void search(int marks[], int n);
void sort(int marks[], int n);
void pass(int marks[], int n);

int main()
{
    int marks[100], n, choice;

    printf("STUDENT MARKS SYSTEM \n\n");

    printf("Enter the number of students: ");
    scanf("%d", &n);

    Entermark(marks, n);

    do
    {
        printf("\n\n MAIN MENU\n");
        printf("1. Display all students' marks\n");
        printf("2. Calculate total and average marks\n");
        printf("3. Find highest and lowest marks\n");
        printf("4. Count passed and failed students\n");
        printf("5. Search for a particular mark\n");
        printf("6. Sort marks in ascending order\n");
        printf("7. Display pass percentage\n");
        printf("8. Exit\n");
        printf("\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displayMarks(marks, n);
                break;

            case 2:
                Average(marks, n);
                break;

            case 3:
                HighestLowest(marks, n);
                break;

            case 4:
                count(marks, n);
                break;

            case 5:
                search(marks, n);
                break;

            case 6:
                sort(marks, n);
                break;

            case 7:
                pass(marks, n);
                break;

            case 8:
                printf("Thank you\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 8);

    return 0;
}

void Entermark(int marks[], int n)
{
    int i;

    printf("\nEnter marks for %d students (0-100):\n", n);

    for (i = 0; i < n; i++)
    {
        do
        {
            printf("Enter marks of student %d: ", i + 1);
            scanf("%d", &marks[i]);

        } while (marks[i] < 0 || marks[i] > 100);
    }
}

void displayMarks(int marks[], int n)
{
    int i;

    printf("\nStudent Marks:\n");

    for (i = 0; i < n; i++)
    {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }
}

void Average(int marks[], int n)
{
    int i, total = 0;
    float average;

    for (i = 0; i < n; i++)
    {
        total += marks[i];
    }

    average = (float)total / n;

    printf("\nTotal Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);
}

void HighestLowest(int marks[], int n)
{
    int i;
    int highest = marks[0];
    int lowest = marks[0];

    for (i = 1; i < n; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }

        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    printf("\nHighest Marks = %d\n", highest);
    printf("Lowest Marks = %d\n", lowest);
}

void count(int marks[], int n)
{
    int i, pass = 0, fail = 0;

    for (i = 0; i < n; i++)
    {
        if (marks[i] >= 40)
        {
            pass++;
        }
        else
        {
            fail++;
        }
    }

    printf("\nPassed Students = %d\n", pass);
    printf("Failed Students = %d\n", fail);
}

void search(int marks[], int n)
{
    int i, search, found = 0;

    printf("\nEnter marks to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (marks[i] == search)
        {
            printf("Marks %d found for student %d.\n",
                   search, i + 1);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Marks not found!\n");
    }
}

void sort(int marks[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    printf("\nMarks in Ascending Order:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }

    printf("\n");
}

void pass(int marks[], int n)
{
    int i, pass = 0;
    float percentage;

    for (i = 0; i < n; i++)
    {
        if (marks[i] >= 60)
        {
            pass++;
        }
    }

    percentage = ((float)pass / n) * 100;

    printf("\nPassed Students = %d\n", pass);
    printf("Pass Percentage = %.2f%%\n", percentage);
}