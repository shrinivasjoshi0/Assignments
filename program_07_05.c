/*
ip = 4 
1       2       3       8
 Diff between even and odd factorial  is : 3
*/
#include<stdio.h>
void Display(int iNo)
{
  int i = 0 ;
  int fact1 = 1 ;
  int fact2 = 1 ;
  if(iNo < 0 )
  {
   iNo = -iNo ;
  }
  
  for(i=1 ; i<=iNo ; i++)
  {
    if(i%2 == 0)
    {
      fact1 = fact1 * i ;
      printf("%d\t" , fact1);
    }
    else 
    {
      fact2 = fact2 * i ;
      printf("%d\t" , fact2);
    }
  }
  
  
  int result = fact1 = fact2 ;
  if(result < 0)
  {
    result = -result ;
  }
  printf("\n Diff between even and odd factorial  is : %d\n" , result);


}
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 Display(iValue1);

 return 0 ;
}