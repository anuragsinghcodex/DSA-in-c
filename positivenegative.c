#include<stdio.h>

int main(){
    int no;
    printf("Enter the no: ");
    scanf("%d",&no);
    if (no >0){
        printf("Positive");
    }
    else if (no < 0){
        printf("Negative");
    }
    else {
        printf("Zero");
    }
    return 0;
}