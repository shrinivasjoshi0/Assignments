// accept number check whether it contains 0 or not
// 10687 - it contains 0
// 124569 - it does not contain zero

#include<stdio.h>
# define TRUE 1 
# define FALSE 0 
typedef int BOOL ;

BOOL chkZero(int iNo)
{
    int iDigit = 0 ; int iCnt = 0 ;
    while (iNo > 0) 
    {
       iDigit = iNo % 10;
       if(iDigit == 0)
       {
        iCnt++ ;
       }
       iNo = iNo / 10 ;
    }
    return iCnt ;
    

}
int main()
{
    int iValue = 0 ;
    BOOL bRet = FALSE ;
    printf("Enter Number : ");
    scanf("%d" , &iValue);

    bRet = chkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else{
        printf("It does not contains Zero");
    }
    return 0 ;
}