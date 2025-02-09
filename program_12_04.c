/*
Enter a Number : 32415
Multiplication of Numbers are : 120
*/
#include<stdio.h>
void DisplayDigit(int iNo)
{

 int i = 0 ;
 int iDigit = 0 ;
 int imul = 1 ;
  if(iNo<0)
  {
    iNo = -iNo ;
  }
  while(iNo > 0)
  {
    iDigit = iNo % 10; // Extract last digit
    imul = imul * iDigit ;
    iNo = iNo / 10; // Remove last digit

  }
  printf("Multiplication of Numbers are : %d" , imul);



} 
int main()
{
 int  iValue1=0 ;

  printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 DisplayDigit(iValue1);

 return 0 ;
}