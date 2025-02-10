/*
Enter the number  : 4
1       2       3       4
*/
#include<stdio.h>

int Pattern(int ino)
{
   for(int icnt=1 ; icnt<=ino ; icnt++)
   { 
    printf("%d\t" , icnt);
    
      
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