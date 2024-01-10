// accept number check whether it contains 0 or not
// 10687 - it contains 0
// 124569 - it does not contain zero

#include<stdio.h>


int chkTwo(int iNo)
{
    int iDigit = 0 ; int iCnt = 0 ;
    while (iNo > 0) 
    {
       iDigit = iNo % 10;
       if(iDigit == 2)
       {
        iCnt++ ;
       }
       iNo = iNo / 10 ;
    }
    return iCnt ;
    

}
int main()
{
    int iValue = 0 ; int bRet = 0;
   
    printf("Enter Number : ");
    scanf("%d" , &iValue);

    bRet = chkTwo(iValue);
        printf("Frequency of Two is : %d" , bRet);
    return 0 ;
}