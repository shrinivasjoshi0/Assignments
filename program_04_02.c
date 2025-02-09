#include<stdio.h>

void FactRev(int iNo)
{
    int a = 0 ;
    int icnt = 0 ;
    int imul = 1 ;
    if(iNo <= 0)
    {
      iNo = -iNo ;
    }
      for(icnt=iNo/2 ; icnt<=iNo; icnt--)
      {
        if(iNo%icnt == 0)
        {
          printf("%d\t" , icnt);
          imul = imul * icnt ; 
          
        }
        
      }
      printf("\n");
      printf("factors IN Decending order : %d\n" , imul);
      
       
    }
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

  FactRev(iValue1);

 return 0 ;
}