/*
Enter a Dollar : 7
Dollar in Rs : 560
*/
#include<stdio.h>
void Display(int iNo)
{
  int i = 0 ;
  if(iNo < 0 )
  {
   iNo = -iNo ;
  }
  int rs = iNo * 80 ;
  printf("Dollar in Rs : %d" , rs);
}
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Dollar : ");
 scanf("%d" , &iValue1);

 Display(iValue1);

 return 0 ;
}