// accept 3 number from user and print its multiplication

typedef int BOOL ;
#define TRUE  1 
#define FALSE 0 


int multiplication(int iNo1 , int iNo2, int iNo3)
{
   if(iNo1 == 0)
   {
    printf("You have entered at least one 0 , that is why we convert into 1..\n");
    iNo1 = 1 ; 
   }
   else if (iNo2 == 0)
   {
    printf("You have entered at least one 0 , that is why we convert into 1..\n");
    iNo2 = 1 ; 
   }
    else if (iNo3 == 0)
   {
    printf("You have entered at least one 0 , that is why we convert into 1..\n");
    iNo3 = 1 ; 
   }else{}

   int res = 0;
   res = iNo1 * iNo2 * iNo3 ;

   return res ;


}

int main()
{ 

    int iValue1 = 0 ; int iValue2 = 0 ; int iValue3 = 0 ;
    printf("Enter 1st Number : ");
    scanf("%d" , &iValue1);
    
    printf("Enter 2nd Number : ");
    scanf("%d" , &iValue2);
  
    printf("Enter 3rd Number : ");
    scanf("%d" , &iValue3);
   
   int iRet = multiplication(iValue1 , iValue2 , iValue3);

printf("Multiplication is :  %d\t" , iRet);
    return 0 ;
}