
/*
row = 3 , col = 4
*       *       *
*       *       *
*       *       *

#   #   #   #
#   #   #   #
#   #   #   #
#   #   #   #

*/

#include<stdio.h>
#include<stdlib.h>


int Pattern(int iRow , int iCol)
{
  int iCnt=0; int i = 0 ;
  for(iCnt=0 ; iCnt<iRow ; iCnt++)
  {
    for(i = 0 ; i<iCol ; i++)
    {
      if((iCol%2)==0)
      printf("#\t");
    else
      printf("*\t");

    }
    printf("\n");
  }
}
int main()
{
 int iValue1 = 0 ;int iValue2 = 0 ; 
  printf("Enter Number of Row : \n");
  scanf("%d" , &iValue1);
    printf("Enter Number of Column : \n");
  scanf("%d" , &iValue2);

  Pattern(iValue1,iValue2);
  return 0 ;
}