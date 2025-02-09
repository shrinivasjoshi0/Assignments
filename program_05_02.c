#include<stdio.h>

void Display(int iNo)
{
  int i = 0 ;

  if(iNo==0)
  {
    printf("Enter valid number");
  }
  else
  {
    for(i=1 ; i<=iNo ; i++)
    {
      printf("%d\t",i);
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