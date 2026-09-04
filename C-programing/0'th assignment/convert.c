//convert minutes into hours and remaining minutes
#include<stdio.h>
int main(){
    int minutes,hours,remaining_minutes;
   printf("Enter minutes:");
   scanf("%d",&minutes);
   hours = minutes /60;
   remaining_minutes = minutes % 60;
   printf("%d minute is equal to %d hours and %d minutes",minutes,hours,remaining_minutes);
   
}