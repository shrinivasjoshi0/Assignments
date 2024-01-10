
// Factorial

#include<stdio.h>
#include<conio.h>

int Factorial(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo ;
    }
    int i = 0 ;
    int fact = 1 ;
    for(i=1 ; i<=iNo ; i++)
    {
        fact = fact * i ;
    }
    return fact ;
 
}

int main()
{
   int iValue = 0 ;
   printf("Enter number: ");
   scanf("%d",&iValue);

 int iRet = Factorial(iValue);
 printf("Factorial is  : %d" , iRet);
   return 0 ;
   
   }