// Calculate area of rectangle

#include<stdio.h>

float RectangleArea(float fWidth , float fHeight)
{
  float ans = 0.0f ;
 ans =  fWidth * fHeight ;
 return ans ;
}

int main()
{
   float fValue1 = 0.0f ;float fValue2 = 0.0f ;
   double dRet = 0.0 ;

   printf("Enter Width : ");
   scanf("%f" , &fValue1);
   
   printf("Enter Height : ");
   scanf("%f" , &fValue2);

   float iRet = RectangleArea(fValue1 , fValue2);
printf("Radius of circle is : %f" , iRet);
    return 0;
    
}