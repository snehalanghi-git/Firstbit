// 10 Find Sum of first and last digit of given number.
// Input: n = 12345
// Output: 6 (1 + 5)
#include<stdio.h>
int main(){

    int n = 12345;
    int temp = n;
    int last, first;

    last = n % 10;

    while(temp >= 10){
        temp = temp / 10;
    }
    first = temp;

    printf("sum of first and last digit is %d",first + last);
    return 0;
}