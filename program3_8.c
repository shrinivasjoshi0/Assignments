// display  Even Factorial

#include<stdio.h>

int EvenFact(int iNo)
{
   if(iNo < 0 )
   {
    iNo = -iNo ;
   }
int fact = 1 ;

for(int i=1 ; i<=iNo ; i++)
{
    if(i % 2 == 0)
    {
        fact = fact * i ;
    }
}
return fact ;


}

int main()
{
   int iValue = 0 ;

   printf("Enter number : ");
   scanf("%d" , &iValue);

 int iRet = EvenFact(iValue);
printf("Even Factorial of Number is %d\n" , iRet);

    return 0;
    
}