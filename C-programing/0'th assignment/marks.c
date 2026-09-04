//input marks of five subject find total marks and calculate percentage
#include<stdio.h>
int main(){
    int a=45,b=78,c=90,d=67,e=56;
    int total = a+b+c+d+e;
    float percentage = (total/500.0)*100;
    printf("Total marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);
    return 0;
}