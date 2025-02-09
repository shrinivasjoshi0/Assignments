/*
Enter a Number : 4512
2
1
5
4
Numbers which are in between 3 and 7 : 2
*/
#include<stdio.h>
void DisplayDigit(int iNo)
{

 int i = 0 ;
 int iDigit = 0 ;
 int icnt = 0 ;
  if(iNo<0)
  {
    iNo = -iNo ;
  }
  while(iNo > 0)
  {
    iDigit = iNo % 10; // Extract last digit
    if(iDigit>3 && iDigit<7)
    {
      icnt++ ;
    }
    printf("%d\n", iDigit);
    iNo = iNo / 10; // Remove last digit

  }
  printf("Numbers which are in between 3 and 7 : %d" , icnt);



} 
int main()
{
 int  iValue1=0 ;

  printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 DisplayDigit(iValue1);

 return 0 ;
}