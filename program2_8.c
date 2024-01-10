// display Dollar to INR

#include<stdio.h>

int DollarToInr(int iNo)
{
   if(iNo < 0 )
   {
    iNo = -iNo ;
   }
int inr = 0 ;
inr = iNo * 70 ;
return inr ;


}

int main()
{
   int iValue = 0 ;

   printf("Enter number : ");
   scanf("%d" , &iValue);

 int iRet = DollarToInr(iValue);
printf("Value in INR is %d\n" , iRet);

    return 0;
    
}