#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]= 5 * (i+1);
        printf("The value if 5 x %d is %d\n",i+1,arr[i]);
    }
    return 0;
}