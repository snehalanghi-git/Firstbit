#include<stdio.h>
int main() {
    int  marks;

    printf("Enter the marks :");
    scanf("%d", & marks);
    
    if(marks > 75){
        printf("Distinction");
    }
    else if (marks > 65){
        printf("First class");
    }
    else if (marks > 50){
        printf("Second class");
    }
    else if (marks > 35){
        printf("Pass class");
    }
    else{
        printf("Fail");
    }
    return 0;
}