#include <stdio.h>
void main (){
    printf("enter the radius od circle: ");
    int rad;
    int pi = 3.14;
    scanf("%d",&rad);

    printf("Perimeter of circle with radious %d is %d\n", rad, 2*pi*rad);
    printf("Area of circle with radious %d is %d\n", rad, pi*rad*rad);
}