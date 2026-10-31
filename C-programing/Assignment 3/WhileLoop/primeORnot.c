// check the number is prime or not
#include<stdio.h>
int main(){
    int no = 7;
    int i = 2;
    int flag = 0;
    while(i < no){
        if(no % i == 0){
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0){
        printf("the %d is prime number", no);
    }
    else{
        printf("the %d is not prime number", no);
    }

}