// accept one character and convert case of that character

#include<stdio.h>


void DisplayConvert(char CValue)
{
  if(CValue >='a' && CValue<='z' )
  {
    CValue = CValue - 32 ;
    printf("Uppercase is : %c" , CValue);
  }
  else if(CValue>='A' && CValue<='Z')
  {
    CValue = CValue + 32 ;
    printf("Lowercase is : %c" , CValue);
  }

}

int main()
{
 char cValue = '\0';
 printf("Enter Character : ");
 scanf("%c" , &cValue);
 
 DisplayConvert(cValue);
 
    return 0 ;
}
