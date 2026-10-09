#include<stdio.h>

void prime_fact(int num){
    if(num == 0){
        printf("0 dont have factor");
    } else if(num == 1){
        printf("1 dont have prime factor");
    }else{
        printf("Factors of %d are : ",num);
        for(int i=2; i<=num; i++){
            while (num % i == 0){
            printf("%d ",i);
            num /= i;
            }
        }
    }
}

int main (){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    prime_fact(num);

    return 0;
}