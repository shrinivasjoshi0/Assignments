#include<stdio.h>

typedef int BOOL ;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
   if((iNo % 5 )== 0)
   {
      return TRUE ;

   }
else{
    return FALSE ;
}

}




int main()
{
   int iValue = 0;
   BOOL bRet = FALSE ;

   printf("Enter Number : ");
   scanf("%d" , &iValue);
   bRet = Check(iValue);
   if(bRet == TRUE)
   {
     printf("Devisible by 5");

   }
   else
   {
     printf("Not Devisible by 5");
   }
    return 0;
}