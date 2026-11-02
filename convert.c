#include<stdio.h>
int main (){
    float celsius,fahrenheit;
    printf("Enter the temp in celsius; ");
    scanf("%f",&celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("Temp in fahrenheit %f", fahrenheit);
    return 0;
}