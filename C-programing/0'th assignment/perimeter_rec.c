#include<stdio.h>
int main(){
    int length, breadth, perimeter;
    printf("Enter length and breadth of rectangle:");
    scanf("%d %d" ,&length ,&breadth);
    perimeter = 2*(length + breadth);
    printf("Perimeter of rectangle is: %d", perimeter);
    
}