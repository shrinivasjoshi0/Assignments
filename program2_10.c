// Accept range and display even number in that range



#include<stdio.h>


void Display(int iStart , int iEnd )
{
  int i = 0 ;
  if(iStart || iEnd < 0)
  {
    printf("Invalid Range...");
  }
  else{}

  for(i=iStart ; i<=iEnd ; i++)
  {
    if((i % 2 == 0))
    {
   printf("%d\t" , i);
  }
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
 