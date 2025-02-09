/*
Enter Single digit : -2
Two
*/
#include<stdio.h>
void Display(int iNo)
{
  int i = 0 ;

 if(iNo<0)
 {
  iNo = -iNo ;
 }

  if(iNo == 0 )
  {
    printf("Zero");
  }
  else if(iNo==1)
  {
    printf("One");
  }
  else if(iNo==2)
  {
      printf("Two");
  }
  else if(iNo==3)
  {
      printf("Three");
  }
  else if(iNo==4)
  {
      printf("Four");
  }
  else if(iNo==5)
  {
      printf("Five");
  }
  else if(iNo==6)
  {
      printf("Six");
  }
  else if(iNo==7)
  {
      printf("Seven");
  }
  else if(iNo==8)
  {
      printf("Eight");
  }
  else if(iNo == 9)
  {
      printf("Nine");
  }
  



}
  

int main()
{
 int iValue1=0 ;

 printf("Enter Single digit : ");
 scanf("%d" , &iValue1);

 Display(iValue1);

 return 0 ;
}