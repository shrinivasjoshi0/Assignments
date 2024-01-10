
#include<stdio.h>


int countEven(int iNo )
{
 int i = 0 ;int iCnt = 0 ; int iDigit = 0;

while(iNo != 0)
{
  iDigit = iNo % 10;
  if(iDigit % 2 != 0)
  {
    iCnt++ ;
  }
  iNo = iNo / 10 ;
}
return iCnt ;
}



int main()
{
  int iValue1 = 0 ; int bRet = 0;

  printf("Enter  number : ");
  scanf("%d" , &iValue1);

 bRet = countEven(iValue1);

printf("Number of Odd
 Digit is : %d" , bRet);
}
 