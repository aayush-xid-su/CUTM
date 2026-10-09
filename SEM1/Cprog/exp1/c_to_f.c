#include <stdio.h>
void main (){
    float cal;
    printf("Enter the temperature in c: ");
    scanf("%f", &cal);

    printf("Temperature in Fahrenheit : %f", ((cal * 9/5) + 32));
}