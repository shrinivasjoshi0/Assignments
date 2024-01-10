
// accept number and display its non factors factors


#include<stdio.h>

void MultiFact(int iNo)
{
  int i = 0 ;
  
  for(i = 1 ; i<iNo ; i++ )
  {
    if(iNo % i != 0)
    {
        printf("%d\t" , i );
   
    }
    
  }
   

}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;
    printf("Enter number : ");
    scanf("%d" , &iValue);

     MultiFact(iValue);
    //printf("\n Multiplication is : %d" , iRet);

    return 0 ;
}
