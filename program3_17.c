// ip : 5
//op : 1 # 2 # 3 # 4 # 5 #



#include<stdio.h>
#include<stdlib.h>
int Pattern(int iLength)
{
  int iCnt = 0 ; char ch = 'A';

  for(iCnt=1 ; iCnt<iLength ; iCnt++)
  {
    printf("%d\t#\t" , iCnt );
    
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