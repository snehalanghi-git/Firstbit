//sum of number start = 1 , end = 5.
#include<stdio.h>
int main(){
    int start = 1, end = 5;
    int sum = 0;
    while(start <= end){
        sum = sum +start;
        start++;
    }
    printf("Sum = %d", sum);
}