/*
factorial :
Enter a Number : 5
Factorial is : 120

*/
#include<stdio.h>
int factorial(int iNo)
{
  int i = 1 ;
  int fact = 1 ;
  if(iNo < 0)
  {
    iNo = -iNo ;
  }
 for(i=1 ; i<=iNo ; i++)
 {
   fact = fact * i ;
 }

 return fact ;


}
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 int result = factorial(iValue1);

  printf("Factorial is : %d" , result);

 return 0 ;
}