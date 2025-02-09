/*
Enter a Number : 2151
1
5
1
2

*/
#include<stdio.h>
void DisplayDigit(int iNo)
{

 int i = 0 ;
 int iDigit = 0 ;

  if(iNo<0)
  {
    iNo = -iNo ;
  }
  while(iNo > 0)
  {
    iDigit = iNo % 10; // Extract last digit
    printf("%d\n", iDigit);
    iNo = iNo / 10; // Remove last digit
  }



} 
int main()
{
 int  iValue1=0 ;

  printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 DisplayDigit(iValue1);

 return 0 ;
}