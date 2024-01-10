// Calculate area of Circle

#include<stdio.h>

float CircleArea(float fRadius)
{
   if(fRadius < 0 )
   {
    fRadius = -fRadius ;
   }
  float ans = 0.0f ;
 ans = 3.14 * fRadius * fRadius ;
 return ans ;
}

int main()
{
   float fValue = 0.0f ;
   double dRet = 0.0 ;

   printf("Enter Radius : ");
   scanf("%f" , &fValue);

   float iRet = CircleArea(fValue);
printf("Radius of circle is : %f" , iRet);
    return 0;
    
}