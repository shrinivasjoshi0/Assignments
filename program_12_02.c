/*
Enter a Number : 12054
4
5
0
2
1
Number of even numbers : 3
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
    if(iDigit %2 != 0)
    {
      icnt++ ;
    }
    printf("%d\n", iDigit);
    iNo = iNo / 10; // Remove last digit

  }
  printf("Number of odd numbers : %d" , icnt);



} 
int main()
{
 int  iValue1=0 ;

  printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 DisplayDigit(iValue1);

 return 0 ;
}