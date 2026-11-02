#include<stdio.h>

int main(){
    int arr[5]={10,40,25,80,15};
    int largest=arr[0];
    for(int i=1;i<5;i++) {
        if(arr[i]>largest)
        {
        largest=arr[i];
        }
    }
    printf("largest=%d",largest);
    return 0;
}