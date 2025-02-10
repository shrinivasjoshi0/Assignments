/*
Enter the number  : 4
4       8       12      16      20
*/
#include<stdio.h>

int Pattern(int ino)
{
  int num = ino ;
   for(int icnt=1 ; icnt<=5 ; icnt++)
   { 
      
         printf("%d\t" , (icnt * num) );
   }
   
}
int main()
{ 
  int ivalue = 0 ;
  
  printf("Enter the number  : ");
  scanf("%d" , &ivalue);
  
  Pattern(ivalue);
  return 0 ;
}