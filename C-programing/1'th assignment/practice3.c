#include<stdio.h>
int main(){
    int i = 1;
    int a = 5;
    while(i<=20){
        a = a+1;
        if(a % 2 == 0){
            printf("%d %d \n", i,a);
        }
        i++;
    }
}