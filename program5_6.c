
// accept number from user and display 


#include<stdio.h>

void Odddisplay(int iNo)
{
if(iNo<0)
{
    iNo = -iNo ;
}
int i = 0 ;
printf("Multiplies of %d\n" , iNo);
for(i=1 ; i<=5 ; i++)
{
    
  printf("%d\n",(i*iNo)); 
    
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
