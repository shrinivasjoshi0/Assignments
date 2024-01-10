// accept name from user and display on screen


#include<stdio.h>
int main()
{
char string[30];
printf("Enter Your Name :  ");
scanf("%[^\n]*c",string);
printf("Your Name Is    : %s",string);
return 0 ;
}
