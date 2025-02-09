/*
Enter a Number : 15
Number is Small
E:\LB(AkshayKumar)\Assignment\6>a
Enter a Number : 75
Number is Medium
E:\LB(AkshayKumar)\Assignment\6>a
Enter a Number : 101
Number is  LARGE
E:\LB(AkshayKumar)\Assignment\6>
*/
#include<stdio.h>
void Display(int iNo)
{
  int i = 0 ;
  if(iNo < 50 )
  {
    printf("Number is Small");
  }
  else if(iNo>50 && iNo < 100)
  {
    printf("Number is Medium");
  }
  else if(iNo>100)
  {
      printf("Number is  LARGE");
  }
  else{printf("invalid input");}


}
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 Display(iValue1);

 return 0 ;
}