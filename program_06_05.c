/*
Number table ; 
Enter a Number : 5
5       10      15      20      25      30      35      40      45      50
*/
#include<stdio.h>
void table(int iNo)
{
  int i = 1 ;
  int mul = 1 ;
  if(iNo < 0)
  {
    iNo = -iNo ;
  }
 for(i=1 ; i<=10 ; i++)
 {
  
  mul = i * iNo ;
  printf("%d\t" , mul);     
 }
 
}
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

table(iValue1);

 return 0 ;
}