// ip : 5
//op :2 4 6 8 10



#include<stdio.h>
#include<stdlib.h>
int Pattern(int iLength)
{
  int iCnt = 0 ; int Even = 2 ;

  for(iCnt=0 ; iCnt<iLength ; iCnt++)
  {
   printf("%d\t" , Even);
   Even = Even+2 ;
    
    
  }

}
int main()
{
 int iValue = 0 ; 
  printf("Enter Number of elements : \n");
  scanf("%d" , &iValue);

  Pattern(iValue);
  return 0 ;
}