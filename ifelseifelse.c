#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    if (marks>=90){
        printf("Grade A");
    }
    else if (marks >=75){
        printf("Grade B");
    }
    else {
        printf("Grade C");

    }
    
    return 0;
}