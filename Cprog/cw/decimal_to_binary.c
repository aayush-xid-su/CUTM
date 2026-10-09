#include<stdio.h>

void decimal_to_binary (int num){
    if(num>1){
        decimal_to_binary(num/2);
    }
    printf("%d", num % 2);
}

int main (){
    int num;
    printf("enter the Decimal Number : ");
    scanf("%d",&num);

    decimal_to_binary(num);

    return 0;
}