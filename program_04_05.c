/* #include<stdio.h>

void Diff(int iNo)
{
    int a = 0 ;
    int icnt = 0 ;
    int isum1 = 0 ;
    int isum2 = 0 ;
    if(iNo < 0)
    {
      iNo = -iNo ;
    }
      for(icnt=1 ; icnt<=iNo ; icnt++)
      {
        if(iNo%icnt == 0)
        {
          printf("%d\t" , icnt);
          isum1 = isum1 + icnt ; 
        }
        else 
        {
          printf("%d\t" , icnt);
          isum2 = isum2 + icnt ;
        }
        
      }
      printf("\n");
      printf("Addition of Factors : %d\n" , isum1);
      printf("Addition of Non-factors : %d\n" , isum2);
      int iDiff = isum1 - isum2 ;
      printf("Difference of factors : %d\n" , iDiff);
       
    }
  

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 Diff(iValue1);

 return 0 ;
}

*/

#include <stdio.h>

void Diff(int iNo)
{
    int icnt = 0;
    int isum1 = 0;
    int isum2 = 0;
    
    if (iNo < 0)
    {
        iNo = -iNo; // Convert to positive if negative
    }
   printf("Factors are : \n ");   
    for (icnt = 1; icnt <= iNo; icnt++)
    {
        if (iNo % icnt == 0) // Factor
        {
          printf("%d\t" , icnt);
            isum1 += icnt;
        }
    }

printf("\n Non-Factors are : \n ");
for (icnt = 1; icnt <= iNo; icnt++)
{
    if(iNo % icnt != 0)// Non-factor
        {
          printf("%d\t" , icnt);
            isum2 += icnt;
        }
}   
    printf("\n\n Addition of Factors: %d\n", isum1);
    printf("\n Addition of Non-factors: %d\n", isum2);
    
    int iDiff = isum1 - isum2;
    printf("\n Difference of factors: %d\n", iDiff);
}

int main()
{
    int iValue1 = 0;

    printf("Enter a Number: ");
    scanf("%d", &iValue1);

    Diff(iValue1);

    return 0;
}
