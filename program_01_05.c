#include<stdio.h>

void Accept(int iNo)
{
    int icnt = 0 ;

    for(icnt=0 ; icnt<=iNo ; icnt++)
    {
        printf("*\t");
    }
}

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 Accept(iValue1);

 return 0 ;
}