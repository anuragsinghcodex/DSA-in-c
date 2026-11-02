#include<stdio.h>

int main(){
    int arr[5]={10,20,30,40,50};
    int key = 40;
    int low = 0;
    int high = 4;
    while(low<=high){
        int mid =(low+high)/2;
        if(arr[mid]==key){
            printf("Found at index %d",mid);
            break;
        } 
        else if(key>arr[mid]){
            low=mid+1;
        }
        else {
            high=mid-1;

        }
    }
    return 0;
}