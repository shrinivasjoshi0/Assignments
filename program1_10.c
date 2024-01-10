// Accept range and display number in that range


#include<stdio.h>


void Display(int iNo1 , int iNo2 )
{
  int i = 0 ;

  for(i=iNo1 ; i<=iNo2 ; i++)
  {
   printf("%d\t" , i);
  }


}



int main()
{
  int iValue1 = 0 ;int iValue2 = 0 ;

  printf("Enter 1st number : ");
  scanf("%d" , &iValue1);
  printf("Enter 2nd number : ");
  scanf("%d" , &iValue2);
   
 Display(iValue1 ,iValue2);

}
 