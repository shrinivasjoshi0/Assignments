// accept number from user and display on screen $*


#include<stdio.h>

void display(int iNo)
{
if(iNo<0)
{
    iNo = -iNo ;
}
int i = 0 ;
for(i=1 ; i<=iNo ; i++)
{
    printf("%d\t" , i);
}

}

int main()
{
int iValue = 0 ;

printf("Enter Number : ");
scanf("%d" , &iValue);

display(iValue);
return 0 ;
}
