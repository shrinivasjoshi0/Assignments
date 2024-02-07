
// take array from user and display largest number from an array


#include<stdio.h>
#include<stdlib.h>

// ip : 5
//op : 5 # 4 # 3 # 2 # 1 #

int Pattern(int iLength)
{
  int iCnt = 0 ; char ch = 'A';

  for(iCnt=iLength ; iCnt>0 ; iCnt--)
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