#include<stdio.h>
int main(){
    int base , height, area;
    printf("Enter base and height of triangle:");
    scanf("%d %d", &base, &height);
    area = (base * height)/2;
    printf("Area of triangle is: %d", area);
    return 0;
}