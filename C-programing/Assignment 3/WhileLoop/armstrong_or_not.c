#include<stdio.h>
int main(){
    int n, sum = 0, digit;
    
    printf("Enter the number:");
    scanf("%d", &n);
    int original = n;
    while(n > 0){
        digit = n % 10;
        sum = sum +( digit * digit *digit);
        n = n / 10;

    }
    if(sum == original){
        printf("The number is an Armstrong number.");
    }
    else{
        printf("The number is not an Armstrong number.");
    }
    return 0;
}