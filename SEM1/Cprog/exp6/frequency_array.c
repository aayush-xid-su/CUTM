#include<stdio.h>
int main (){
    int arr[18] = {2,3,4,5,2,2,2,2,2,3,4,4,4,4,5,6,4,5};
    int count;

    for(int i=0;i<18;i++){
        count = 1;

        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){
                count = 0;
                break;
            }
        }
        if(count != 0){
            count = 1;

            for(int j=i; j<18; j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }

            printf("%d occurs %d time \n",arr[i],count);
        }
    }

    return 0;
}