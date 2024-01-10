// display difference between Odd Factorial and even factorial

#include<stdio.h>

int DiffFact(int iNo)
{
   if(iNo < 0 )
   {
    iNo = -iNo ;
   }
int fact1 = 1 ;
int fact2 = 1 ;

for(int i=1 ; i<=iNo ; i++)
{
    if(i % 2 != 0)
    {
        fact1 = fact1 * i ;
    }
}
printf("Odd Factorial is : %d\n" , fact1);
for(int i=1 ; i<=iNo ; i++)
{
    if(i % 2 == 0)
    {
        fact2 = fact2 * i ;
    }
}
printf("Even Factorial is : %d\n" , fact2);
int Diff = fact1 - fact2 ;
if(Diff < 0)
{
    Diff = -Diff ;
}
return Diff ;


}

int main()
{
   int iValue = 0 ;

   printf("\n Enter number : ");
   scanf("%d" , &iValue);

 int iRet = DiffFact(iValue);
printf("Difference between odd Factorial and even factorial is %d\n" , iRet);

    return 0;
    
}