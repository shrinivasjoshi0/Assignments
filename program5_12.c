// accept number and display diff between summation 
// of even and summation of odd digits


#include<stdio.h>

int CountDiff(int iNo)
{
  int iEvenSum = 0 ;int iOddSum = 0 ; int iDiff=0;
int SumDigit = 0; int iDigit =0;
  while(iNo != 0)
 {
    iDigit = iNo % 10 ;
    if(iDigit % 2 == 0)
    {
        printf("%d" , iDigit);
        iEvenSum = iEvenSum + iDigit ;
    }
    else 
    {
        printf("%d" , iDigit);
        iOddSum = iOddSum + iDigit ;
    }
    iNo = iNo / 10 ;
  
 }
 printf ("\nEven digit sum : %d\t" , iEvenSum);
 printf ("\nOdd digit sum : %d\t" , iOddSum);
 iDiff = iEvenSum - iOddSum ;
 return iDiff ;
}



int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("\nEnter a Number : ");
    scanf("%d" , &iValue);

    iRet = CountDiff(iValue);
    printf("\nDifference  is : %d\n\n" , iRet);

    return 0 ;
}