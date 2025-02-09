/*
Enter a Number : 11
Enter a Range : 21
12      14      16      18      20

*/
#include<stdio.h>
void Range(int iNo , int iRange)
{

 int i = 0 ;
 for(i=iNo ; i<=iRange ; i++)
 {
  if(i%2==0)
  {
   printf("%d\t" , i);
 }
 }
} 
int main()
{
 int  iValue1=0 ;
 int iValue2 = 0 ;
  printf("Enter a Number : ");
 scanf("%d" , &iValue1);
 
 printf("Enter a Range : ");
 scanf("%d" , &iValue2);

 Range(iValue1 , iValue2);

 return 0 ;
}