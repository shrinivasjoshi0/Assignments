#include<stdio.h>

void Display(int iNo)
{
  int i = 0 ;

  for(i= 1 ; i<=iNo ; i++)
  {
    if(i%2 == 0 )
    {
    printf("%d\t" , i);
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