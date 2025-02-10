/*
Enter the number  : 18
1       3       5       7       9       11      13      15      17
*/
#include<stdio.h>

int Pattern(int ino)
{
   for(int icnt=0 ; icnt<=ino ; icnt++)
   { 
    if((icnt%2)!=0)
    {
      printf("%d\t" , icnt);
    }     
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