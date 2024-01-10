// accept number from user and check number is greater than 100 or not

typedef int BOOL ;
#define TRUE  1 
#define FALSE 0 
#define Equal 2

BOOL ChkGreater(iNo)
{
    
if(iNo > 100)
{
    return 1 ;
}
else if(iNo<100)
{
    return 0 ;
}
else if(iNo==100)
{
    return 2 ;
}

}

int main()
{ 

    int iValue = 0 ;int iRet = 0 ;
    printf("Enter Number : ");
    scanf("%d" , &iValue);
  
    iRet = ChkGreater(iValue);

    if(iRet==1)
    {
        printf("\nNumber is greater than 100...\n\n");

    }
    else if(iRet==0)
    {
        printf("\nNumber is Smaller than 100..");
    }
    else if(iRet==2)
    {
        printf("\nYour number is 100..");

    }

    return 0 ;
}