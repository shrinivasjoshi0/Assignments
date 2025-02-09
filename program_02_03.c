#include<stdio.h>

void Display(int iNo)
{
  if(iNo == 0)
  {
    printf("Enter a number greater than 0");
  }else{}
    if(iNo < 0)
    {
      iNo = -iNo ;
    }
    else
    {}
   if( iNo<=10)
   {
    printf("Hello..");
   }
   else{
    printf("Demo..");
   }
}

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 Display(iValue1);

 return 0 ;
}