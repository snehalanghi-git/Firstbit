#include<stdio.h>
int main(){
    int celsius,farenheit;
    printf("Enter temp in celsius:");
    scanf("%d" ,&celsius);
    farenheit = (celsius * 9/5)+32;
    printf("Temperature in Fahrenheit is: %d", farenheit);
}