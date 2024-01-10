
// accept number from user and display Odd numbers till number


#include<stdio.h>

void Odddisplay(int iNo)
{
if(iNo<0)
{
    iNo = -iNo ;
}
int i = 0 ;
for(i=1 ; i<=iNo ; i++)
{
    if(i % 2 != 0)
    {
        printf("%d\t" , i);
    }
}

}

int main()
{
int iValue = 0 ;

printf("Enter Number : ");
scanf("%d" , &iValue);

Odddisplay(iValue);
return 0 ;
}
