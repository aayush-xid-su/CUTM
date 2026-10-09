#include<stdio.h>
void main (){
    int num1 , num2;
    printf("enter the number1 : ");
    scanf("%d",&num1);
    printf("enter the number2 : ");
    scanf("%d", &num2);

    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;

    printf("num1 is %d and num2 is %d",num1, num2);
}