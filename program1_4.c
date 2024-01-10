// accept number and display its multiplication of factors
// input : 12
// output : 144 (1*2*3*4*6)

#include<stdio.h>

int MultiFact(int iNo)
{
  int i = 0 ;
  int mult = 1;
  for(i = 1 ; i<=iNo/2 ; i++ )
  {
    if(iNo % i == 0)
    {
        printf("%d\t" , i );
        mult = mult * i ;
    }
    
  }
   return mult ;    

}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;
    printf("Enter number : ");
    scanf("%d" , &iValue);

    iRet = MultiFact(iValue);
    printf("\n Multiplication is : %d" , iRet);

    return 0 ;
}
