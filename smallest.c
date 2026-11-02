#include<stdio.h>

int main(){
    int arr[5]={5,12,3,25,8};
    int smallest = arr[0];
    for (int i=1;i<5;i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    printf("smallest = %d",smallest);
    return 0;
}