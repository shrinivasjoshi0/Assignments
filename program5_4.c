// display summation of non factors

#include<stdio.h>


int SumNonFact(int iNo)
{
  int i = 0 ;
  int add = 0 ;
if(iNo != 0)
{
    printf("The non-factors are : \t");
  for(i=1 ; i<iNo ; i++)
  {
    if(iNo % i != 0)
    {
        printf("%d\t" , i);
        add = add + i ;
    }

  }
  return add ;
}
}


  int SumFact(int iNo)
  {
  int add = 0 ; int i = 0 ;
  if(iNo != 0)
  {
    printf("\n\nThe factors are : \t");
  for(i=1 ; i<=iNo/2 ; i++)
  {
    if(iNo % i == 0)
    {
        printf("%d\t" , i);
        add = add + i ;
    }

  }
 return add ;
}
  }



int main()
{
 int iValue = 0 ;
 int sum1 = 0 ;
 int sum2 = 0 ;

 printf("\n\nEnter Number : ");
 scanf("%d" , &iValue);

 sum1 = SumNonFact(iValue);
 printf("\nThe Summation Is : %d\n" , sum1);

sum2 = SumFact(iValue);
 printf("\nThe Summation Is : %d\n" , sum2);

 int diff = sum1 - sum2 ;
 printf("\n\nDifference is  :  %d\n" , diff);

    return 0 ;
}