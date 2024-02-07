
// take array from user and display largest number from an array


#include<stdio.h>
#include<stdlib.h>

// ip : 5
//op : A B C D E

int Pattern(int iLength)
{
  int iCnt = 0 ; char ch = 'A';
  if(iLength > 26)
  {
    printf("Invalid Number...Enter number between 1 to 26\n\n");
    return ;
  }
  for(iCnt=1 ; iCnt<=iLength ; iCnt++)
  {
    printf("%c\t" , ch);
    ch++ ;
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