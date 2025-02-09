/*


*/
#include<stdio.h>
void Display(int iNo)
{
  int i = 0 ;
  int fact = 1 ;
  if(iNo < 0 )
  {
   iNo = -iNo ;
  }
  
  for(i=1 ; i<=iNo ; i++)
  {
    if(i%2 != 0)
    {
      fact = fact * i ;
    }
    else{}
  }
  printf("Even fact is : %d" , fact);


}
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 Display(iValue1);

 return 0 ;
}