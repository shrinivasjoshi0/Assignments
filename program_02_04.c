
#include<stdio.h>

void Display(int iNo1 , int iNo2)
{
  if((iNo1 && iNo2) == 0)
  {
    printf("Enter a number greater than 0");
  }else{}
    if(iNo1 < 0)
    {
      iNo1 = -iNo1 ;
    }
 int icnt = 0 ;
    for(icnt = 1 ; icnt<=iNo2 ; icnt++)
    {
        printf("%d\t" , iNo1);
    }



    
}


int main()
{
 int iValue1=0 ;
  int iValue2=0 ;

 printf("Enter a 1st Number : ");
 scanf("%d" , &iValue1);

 
 printf("Enter a 2nd Number : ");
 scanf("%d" , &iValue2);

 Display(iValue1,iValue2);

 return 0 ;
}