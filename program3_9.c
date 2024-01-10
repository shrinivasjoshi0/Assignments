// Convert kilometer into meter

#include<stdio.h>

int KMtoMeter (int iNo)
{
   if(iNo < 0 )
   {
    iNo = -iNo ;
   }

  int ans = 0.0f ;
 ans = iNo * 1000 ;
 return ans ;
}

int main()
{
   int iValue = 0 ; int iRet = 0 ;

   printf("Enter Distance(In KM) : ");
   scanf("%d" , &iValue);

   iRet = KMtoMeter(iValue);
   printf("Distance in Meter : %d" , iRet);
    return 0;
    
}