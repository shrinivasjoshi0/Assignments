// Accept number and display number of digits between 3 and 7


#include<stdio.h>


int CountRange(int iNo)
{
    int iCnt = 0 ;

    while(iNo != 0 )
    {
        int iDigit = iNo % 10 ;
        
        if(iDigit > 3 && iDigit < 7)
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
    int iRet = 0;
    printf("Enter a Number : ");
    scanf("%d" , &iValue);

    iRet = CountRange(iValue);
    printf("Count is : %d\n\n" , iRet);

    return 0 ;
}