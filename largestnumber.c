#include<stdio.h>

int main(){
    int a , b;
    printf("Enter the first no: ");
    scanf("%d",&a);
    printf("Enter the second no: ");
    scanf("%d",&b);
    if(a>b){
        printf("a is largest");
    }
    else {
        printf("b is largest");
    }
    return 0;
}