
// leap year ber korar programm
#include <stdio.h>

int main()
{

 int year;
 printf("enter a year : ");
 scanf("%d", &year);
 if(year % 4 == 0 || year % 400 == 0 || year % 100 == 0 ){
     printf("%d the year is leap year ", year);
 }else{
     printf("%d the year is not leap year ", year);
 }
    
}
