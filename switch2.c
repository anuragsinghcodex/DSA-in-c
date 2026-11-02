#include<stdio.h>

int main(){
    int no;
    printf("Enter the no(1-4): ");
    scanf("%d",&no);
    switch(no){
        case 1:
        printf("add");
        break;
        case 2:
        printf("sub");
        break;
        case 3:
        printf("mul");
        break;
        case 4:
        printf("div");
        break;
    }
    return 0;
}