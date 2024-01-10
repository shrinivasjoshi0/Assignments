// accept number from user and check number is equal or not

typedef int BOOL ;
#define TRUE  1 
#define FALSE 0 


BOOL ChkEqual(int iNo1 , int iNo2)
{
if(iNo1==iNo2)
{
    return 1;
}    
else
{
    return 0;
}

}

int main()
{ 

    int iValue1 = 0 ; int iValue2 = 0 ;
    printf("Enter 1st Number : ");
    scanf("%d" , &iValue1);

        printf("Enter 2nd Number : ");
    scanf("%d" , &iValue2);
  
   int iRet = ChkEqual(iValue1 , iValue2);

    if(iRet==1)
    {
        printf("\nValues are Equal...\n\n");

    }
    else
    {
         printf("\nValues not are Equal...\n\n");
    }
int diff = iValue1 - iValue2 ;
printf("Difference is :  %d\n\n" , diff);
    return 0 ;
}