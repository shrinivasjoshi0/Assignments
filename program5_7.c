// display of its table in reverse order



#include<stdio.h>

void TableRev(int iNo)
{
if(iNo<0)
{
    iNo = -iNo ;
}
int i = 0 ;
printf("Table of %d\n" , iNo);
for(i=1 ; i<=10 ; i++)
{
    
  printf("%d\n",(i*iNo)); 
    
}
}

int main()
{
int iValue = 0 ;

printf("Enter Number : ");
scanf("%d" , &iValue);

TableRev(iValue);
return 0 ;
}
