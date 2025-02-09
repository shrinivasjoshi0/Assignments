#include<stdio.h>

void SumNonFact(int iNo)
{
    int a = 0 ;
    int icnt = 0 ;
    int isum = 0 ;
    if(iNo <= 0)
    {
      iNo = -iNo ;
    }
      for(icnt=1 ; icnt<=iNo; icnt++)
      {
        if(iNo%icnt != 0)
        {
          printf("%d\t" , icnt);
          isum = isum + icnt ; 
        }
      }
      printf("\n");
      printf("Summation of Non-factors : %d\n" , isum);
       
    }
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 SumNonFact(iValue1);

 return 0 ;
}