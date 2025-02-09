#include<stdio.h>

void PrintEven(int iNo)
{
    int a = 0 ;
    int icnt = 0 ;
   int i ;
    if(iNo <= 0)
    {
      iNo = -iNo ;
    }
    for(icnt=1 ; icnt<=iNo ; icnt++)
    { 
      a = a+2 ;
      printf("%d\t" , a);
    }
    printf("\n");
       
    }
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 PrintEven(iValue1);

 return 0 ;
}