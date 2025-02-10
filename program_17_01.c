/*
Enter the number  : 4
$       *       $       *       $       *       $       *
*/
#include<stdio.h>

int Pattern(int ino)
{
   for(int icnt=0 ; icnt<ino ; icnt++)
   { 
    printf("$\t*\t");
    
      
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