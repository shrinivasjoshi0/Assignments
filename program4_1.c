#include<stdio.h>

void Display (int iNo , int iFrequency)
{
   int i = 0 ;
   for(i = 0 ; i<iFrequency ; i++)
   {
    printf("%d" , iNo);
   }

}


int main()
{
   int iValue = 0 ;
   int iCount = 0 ;
   printf("Enter Number : ");
   scanf("%d" , &iValue);

   printf("Enter frequency : ");
   scanf("%d" , &iCount);

   Display(iValue , iCount);
   return 0 ;

}
