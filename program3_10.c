
// Accept range and display number in that range


#include<stdio.h>


void Display(int iStart , int iEnd )
{
  int i = 0 ; int iSum = 0 ;
if(iStart || iEnd < 0)
{
    printf("Invalid Input...");
}

  for(i=iStart ; i<=iEnd ; i++)
  {
   printf("%d\t" , i);
   iSum = iSum + i ;
  }
printf("\nThe Addition is : %d\t\n" , iSum);

}



int main()
{
  int iValue1 = 0 ;int iValue2 = 0 ;

  printf("\nEnter 1st number : ");
  scanf("%d" , &iValue1);
  printf("Enter 2nd number : ");
  scanf("%d" , &iValue2);
   
 Display(iValue1 ,iValue2);

}
 