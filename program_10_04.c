/*
Enter a Number : 11
Enter a Range : 21
21      20      19      18      17      16      15      14      13      12      11
*/
#include<stdio.h>
void Range(int iNo , int iRange)
{

 int i =0  ;
 for(i=iRange ; i>=iNo ; i--)
 {
   printf("%d\t" , i);
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