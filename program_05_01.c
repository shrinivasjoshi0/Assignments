#include<stdio.h>

void Display(int iNo)
{
  int i = 0 ;
  if(iNo < 0 )
  {
    iNo = -iNo ;
  }
  else if(iNo==0)
  {
    printf("Enter valid number");
  }
  else
  {
    for(i=0 ; i<iNo ; i++)
    {
      printf("$\t*\t");
    }
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