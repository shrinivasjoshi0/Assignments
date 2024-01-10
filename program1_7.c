// accept number from user and check number is greater than 100 or not

void ChkGreater(int iNo)
{
if(iNo < 50 )
{
    printf("Number is small..!");
}
else if(iNo > 50 && iNo < 100 )
{
    printf("Number is MeDiUm..!");
}
else if(iNo > 100 )
{
    printf("Number is LARGE..!");
}else{}


}


int main()
{ 

    int iValue = 0 ;int iRet = 0 ;
    printf("Enter Number : ");
    scanf("%d" , &iValue);
  
    ChkGreater(iValue);

    return 0 ;
}