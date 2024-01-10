// Accept total marks and obtained marks from user and print its percentage.

#include<stdio.h>
#include<stdlib.h>

float CalculatePercentage(float iNo1 , float iNo2)
{
  float per = 0.0f;
  per = ((iNo2 / iNo1) * 100 );

  return per ;


}

int main()
{ 

    float iValue1 = 0 ; float iValue2 = 0 ; float iRet = 0.0f;
    printf("Enter Total Marks : ");
    scanf("%d" , &iValue1);

        printf("Enter Obtained Marks : ");
    scanf("%d" , &iValue2);
  
   iRet = CalculatePercentage(iValue1 , iValue2);

printf("Percentage  is :  %f\t" , iRet);
    return 0 ;
}