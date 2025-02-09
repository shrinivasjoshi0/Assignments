#include<stdio.h>

void MultiFact(int iNo)
{
    int a = 0 ;
    int icnt = 0 ;
    int imul = 1 ;
    if(iNo <= 0)
    {
      iNo = -iNo ;
    }
      for(icnt=1 ; icnt<=iNo/2; icnt++)
      {
        if(iNo%icnt == 0)
        {
          printf("%d\t" , icnt);
          imul = imul * icnt ; 
        }
      }
      printf("\n");
      printf("Multiplication of factors : %d\n" , imul);
       
    }
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 MultiFact(iValue1);

 return 0 ;
}