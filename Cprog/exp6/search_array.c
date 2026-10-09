#include<stdio.h>
int main (){
    int arr[] = {11,23,55,89,67,31,46,73,94,9};
    int num;

    printf("enter the array element to search: ");
    scanf("%d",&num);

    for(int i=0;i<10;i++){
        if(arr[i]==num){
            printf("%d found at array index arr[%d]\n",num,i);
            break;
        }
    }
    for(int i=0;i<10;i++){
        if(arr[i]!=num){
            printf("%d is not in the array list\n",num);
            break;
        }
    }

    return 0;
}