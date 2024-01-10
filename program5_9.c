// accept area in squre feet and convert it into squre meter 
// 1 squre feet = 0.0929 squre meter


#include<stdio.h>

double SQMeter(float iNo)
{
   

  double ans = 0.0f ;
 ans = iNo * 0.0929 ;
 return ans ;
}

int main()
{
   float fValue = 0.0f ; double iRet = 0.0 ;

   printf("Enter Area in Squre Feet : ");
   scanf("%f" , &fValue);

   iRet = SQMeter(fValue);
   printf("Area in Squre Meter : %f" , iRet);
    return 0;
    
}