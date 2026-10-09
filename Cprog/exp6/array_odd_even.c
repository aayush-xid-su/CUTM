#include<stdio.h>
int main () {
    int arr[10],evencount=0,oddcount=0,j=0;
    
    for(int i=0;i<10;i++){
        arr[i] = j++;
        if(arr[i]%2==0){
            evencount++;
        } else {
            oddcount++;
        }
    }

    printf("Total even number is : %d\n",evencount);
    printf("Total odd number is : %d\n",oddcount);

    return 0;
}