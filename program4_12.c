// Accept number and display multiplication of all digits


#include<stdio.h>


int MultDigits(int iNo)
{
    int iCnt = 0 ; int iMul = 1 ;

    while(iNo != 0 )
    {
        int iDigit = iNo % 10 ;
        if(iDigit==0)
        {
            iDigit = 1;
        }
       iMul = iMul * iDigit ;
       iNo = iNo / 10 ;

    }
    return iMul ;
}



int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("Enter a Number : ");
    scanf("%d" , &iValue);

    iRet = MultDigits(iValue);
    printf("Count is : %d\n\n" , iRet);

    return 0 ;
}