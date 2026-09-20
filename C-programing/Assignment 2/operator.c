#include<stdio.h>
int main() {
    int a,b;
    char op;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Enter an operator:");
    scanf(" %c",&op);

    if(op == '+'){
        printf("Result: %d",a+b);
    }
    else if(op == '-'){
        printf("Result: %d",a-b);
    }
    else if(op == '*'){
        printf("Result: %d",a*b);
    }
    else if(op == '/'){
        if(b != 0){
            printf("Result: %d",a/b);
        } else {
            printf("Error: Division by zero");
        }
    }
    else{
        printf("Invalid operator");
    }
}