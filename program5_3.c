// check character is  vovel or not



#include<stdio.h>

typedef int bool;
#define TRUE 1 
#define FALSE 0

bool ChkVowel(char c)
{

 if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
  {
    return TRUE ;
  }
  else
  {
    return FALSE ;
  }
}

int main()
{
 char Cvalue = '\0' ;
 bool bRet = FALSE ;

 printf("Enter Character  :  ");
 scanf("%c" , &Cvalue);

 bRet = ChkVowel(Cvalue);

 if(bRet == TRUE)
 {
  printf("It is Vowel..!");

 }
 else{
  printf("It is not Vowel..!");
 }

    return 0 ;
}