/*
Enter a Number : 2395
Diff bet even and odd: -15
*/
#include<stdio.h>
void DisplayDigit(int iNo)
{

 int i = 0 ;
 int iDigit = 0 ;
 int isum1 = 0 ;
 int isum2 = 0 ;
 
 if(iNo<0)
  {
    iNo = -iNo ;
  }
  while(iNo > 0)
  {
    iDigit = iNo % 10; // Extract last digit
    if(iDigit %2 == 0)
    {
      isum1 = isum1 + iDigit ;
    }
    else
    {
      isum2 = isum2 + iDigit ;
    }
    iNo = iNo / 10; // Remove last digit

  }
  int iResult = isum1 - isum2 ;
  
  printf("Diff bet even and odd: %d" , iResult);



} 
int main()
{
 int  iValue1=0 ;

  printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 DisplayDigit(iValue1);

 return 0 ;
}