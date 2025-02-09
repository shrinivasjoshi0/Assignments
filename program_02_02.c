#include<stdio.h>

void Accept(int iNo)
{
  if(iNo == 0)
  {
    printf("Enter a number greater than 0");
  }
    if(iNo < 0)
    {
      iNo = -iNo ;
    }
    
    int icnt = 0 ;

  while(icnt < iNo)
    {
        printf("*\t");
        icnt++ ;    
    }
}

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 Accept(iValue1);

 return 0 ;
}