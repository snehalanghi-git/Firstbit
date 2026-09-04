#include <stdio.h>
int main(){
    int no;
    printf("Enter A Number:");
    scanf("%d",& no);
    if(no % 2 == 0){
        printf("%d is Even number",no);
    }
    else{
        printf("%d is Odd number", no);
    }
    return 0;
}