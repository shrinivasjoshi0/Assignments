/*
Enter Value in SQFeet  : 5
SQFeet to SQMeter : 0.464500
*/
#include<stdio.h>
void SQFeet(float SQ)
{

 float iresult =  0.0929 * SQ ;
 printf("SQFeet to SQMeter : %f" , iresult);

} 
int main()
{
 float  iValue1=0 ;
  printf("Enter Value in SQFeet  : ");
 scanf("%f" , &iValue1);

 SQFeet(iValue1);

 return 0 ;
}