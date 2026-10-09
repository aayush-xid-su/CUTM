#include<stdio.h>

void star1(int n) {
    printf("STAR PATTERN 1 \n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void star2(int n){
    printf("\n \n");
    printf("STAR PATTERN 2 \n");
    for(int i=n;i>=1;i--){
        for(int k=0;k<n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void star3(int n){
    printf("\n \n");
    printf("STAR PATTERN 3 \n");
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}




void main () {
    int n;
    printf("enter the number: ");;
    scanf("%d",&n);

    star1(n);
    star2(n);
    star3(n);
}

