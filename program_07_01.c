/*
ip = 5 
 op = * * * * * # # # # # 
*/
#include<stdio.h>
void Display(int iNo)
{
  int i = 0 ;
  if(iNo < 0 )
  {
   iNo = -iNo ;
  }
  for(i=1 ; i<= iNo ; i++)
  {
    printf("*\t");
  }
  for(i=1 ; i<= iNo ; i++)
  {
    printf("#\t");
  }


}
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 Display(iValue1);

 return 0 ;
}