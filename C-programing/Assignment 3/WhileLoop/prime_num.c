#include<stdio.h>
void main(){
    int n = 121;
    int temp = n;
    int rem, rev=0;

    while(temp > 0){
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if(rev == n){
        printf("prime number");
    }
    else{
        printf("not prime number");
    }

}