/*
Enter the number of elements : 6
Enter Elements : 85 66 11 80 93 11
11      11      
Elements contains 11 : 2 times
*/
#include<stdio.h>

void Display(int arr[] , int ilength)
{
   int icnt = 0 ;
    int icnt1 = 0 ;
    int icnt2 = 0 ;
   for(icnt=1 ; icnt<=ilength ; icnt++)
   { 
      if(arr[icnt] == 11 )
      {
      printf("%d\t" , arr[icnt]);
      icnt1++ ;
      }      
   }
   printf("\n Elements contains 11 : %d times" , icnt1);
   }
   
int main()
{ 
  int iSize = 0 ;
  int icnt = 0 ;
  int *p = NULL ;


  printf("Enter the number of elements : ");
  scanf("%d" , &iSize);

  p = (int *)malloc(iSize * sizeof(int));

  printf("Enter Elements : ");
  for(icnt=1 ; icnt<=iSize ; icnt++)
  {
    scanf("%d" , &p[icnt]);
  }

  Display(p,iSize);

  free (p);

  return 0 ;
}