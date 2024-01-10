// accept number and display its factors in decreasing order
// input : 12
// output : 6  4  3  2  1 

#include<stdio.h>

void FactRev(int iNo)
{
  int i = 0 ;
  int sum = 0; int rem = 0;
  for(i = 1 ; i<=iNo/2 ; i++ )
  {
    if(iNo % i == 0)
    {
        printf("%d\t" , i );
      
      rem = i % 10 ;
       sum = sum * 10 + rem ;
       i/= 10 ;
    }
    
  }
   printf("%d\n" , sum)  ;

}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;
    printf("Enter number : ");
    scanf("%d" , &iValue);

      FactRev(iValue);
    // printf("Reverse order : %d\t" , iRet);

    return 0 ;
}
