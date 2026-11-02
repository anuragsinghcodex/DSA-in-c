#include<stdio.h>

int main(){
    int arr[5]={10,20,30,40,50};
    int key = 40;
    for (int i=0;i<5;i++){
        if(arr[i]==key){
            printf("Found at index %d",i);
            break;
        }
    }
    return 0;
}