
/*
row = 4 , col = 3
5 4 3  
5 4 3 
5 4 3 
5 4 3 
*/


#include<stdio.h>
#include<stdlib.h>


int Pattern(int iRow , int iCol)
{
  int iCnt=0; int i = 0 ; int iNo= 0 ;
  for(iCnt=0 ; iCnt<iRow ; iCnt++)
  {
    for(i = 0 ; i<iCol ; i++)
    {
        iNo++ ;
      printf("%d\t" , iNo);
    } 
    iNo = 0;
    
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