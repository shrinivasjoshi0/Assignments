// Accept number and display its digits in reverse
 // 2395
 // 5 9 3 2

#include<stdio.h>


void Display(int iNo1 )
{
  int iRev = 0 ; int iDigit = 0 ;
  if(iNo1<0)
  {
    iNo1 = -iNo1 ;
  }
  while(iNo1 != 0)
  {
    iDigit = iNo1 % 10 ;
    printf("%d\t" , iDigit);
    iNo1 = iNo1 / 10 ;

  }

}



int main()
{
  int iValue1 = 0 ;

  printf("Enter  number : ");
  scanf("%d" , &iValue1);

 Display(iValue1);

}
 