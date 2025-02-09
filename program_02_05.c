#include<stdio.h>
typedef int bool ;
#define TRUE 1
#define False 0 

bool Check(int iNo1)
{

    
    if(iNo1%2 == 0)
    {
        return TRUE ;
    }
    else
    {return False ; }
}


int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);
 bool bRet = Check(iValue1);
 if(bRet==TRUE)
 {
 printf(  "Numbr is  Even"  );
 }
 else
 {
    printf("Numbr is Odd");
 }
    return 0 ;
}