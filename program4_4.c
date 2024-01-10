// display summation of non factors

#include<stdio.h>


int SumNonFact(int iNo)
{
  int i = 0 ;
  int add = 0 ;

  for(i=1 ; i<iNo ; i++)
  {
    if(iNo % i != 0)
    {
        add = add + i ;
    }

  }
 return add ;
}



int main()
{
 int iValue = 0 ;
 int sum = 0 ;

 printf("Enter Number : ");
 scanf("%d" , &iValue);

 sum = SumNonFact(iValue);
 printf("The Summation Is : %d" , sum);


    return 0 ;
}