// Accept tempreture in Fahrenheit and convert it into celcius .
// 1 celcius = (Faherenheit - 32 ) * (5/9)



#include<stdio.h>

double FhtoCS (float temp)
{
   

  double ans = 0.0f ;
 ans = ((temp - 32 ) * (5/9)) ;
 return ans ;
}

int main()
{
   float fValue = 0.0f ; double iRet = 0.0 ;

   printf("Enter Tempreture : ");
   scanf("%f" , &fValue);

   iRet = FhtoCS(fValue);
   printf("Tempreture in Celcius : %f" , iRet);
    return 0;
    
}