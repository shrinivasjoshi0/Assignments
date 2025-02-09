/*
Enter kilometer : 5
Kilometer to Meter : 5000
*/
#include<stdio.h>
void KMtoMeter(int KM)
{

 int iresult =  1000 * KM ;
 printf("Kilometer to Meter : %d" , iresult);

} 
int main()
{
 int  iValue1=0 ;
  printf("Enter kilometer : ");
 scanf("%d" , &iValue1);

 KMtoMeter(iValue1);

 return 0 ;
}