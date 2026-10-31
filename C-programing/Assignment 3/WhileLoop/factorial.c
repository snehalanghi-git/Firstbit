#include<stdio.h>
int main(){
    int no, i = 1, fact = 1;


    printf("Enter the number:");
    scanf("%d", &no);
    while(i <= no){
        fact = fact * i;
        i++;
    }
    printf("The factorial of the number is: %d", fact);
    return 0;
}