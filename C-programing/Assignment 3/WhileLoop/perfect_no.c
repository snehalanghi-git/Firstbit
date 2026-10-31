#include<stdio.h>
int main(){
    int n, sum =0, i= 1;
    printf("Enter the number:");
    scanf("%d", &n);

    while( i < n){
        if(n % i == 0){
            sum = sum + i;
        }
        i++;
    }
    if(sum == n){
        printf("The number is a perfect number");
    }
    else{
        printf("The number is not a perfect number");
    }
    return 0;
}