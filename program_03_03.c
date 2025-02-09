#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int a = 0 ;
    int icnt = 0 ;
    int i ;
    if(iNo <= 0)
    {
      iNo = -iNo ;
    }
    for(icnt=1 ; icnt<=iNo/2 ; icnt++)
    { 
     if(iNo%icnt == 0)
     {
        if(icnt%2 == 0)
        {
        printf("%d\t" , icnt);
        }
     }
    }
    printf("\n");
       
    }
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 DisplayEvenFactor(iValue1);

 return 0 ;
}