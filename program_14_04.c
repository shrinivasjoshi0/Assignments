/*
Enter the number of elements : 6
Enter the element you want to search : 66
Enter Elements : 85 66 3 66 93 88

 The Number comes : 2 times
*/
#include<stdio.h>

void Display(int arr[] , int ilength , int NO)
{
   int icnt = 0 ;
    int icnt1 = 0 ;
    int icnt2 = 0 ;
   for(icnt=1 ; icnt<=ilength ; icnt++)
   { 
      if(arr[icnt] == NO )
      {
      
      icnt1++ ;
      }
      
   }
   printf("\n The Number comes : %d times" , icnt1);
}


int main()
{ 
  int iSize = 0 ;
  int icnt = 0 ;
  int *p = NULL ;
  int NO = 0 ;

  printf("Enter the number of elements : ");
  scanf("%d" , &iSize);
  
  printf("Enter the element you want to search : ");
  scanf("%d" , &NO);

  p = (int *)malloc(iSize * sizeof(int));

  printf("Enter Elements : ");
  for(icnt=1 ; icnt<=iSize ; icnt++)
  {
    scanf("%d" , &p[icnt]);
  }

  Display(p,iSize , NO);

  free (p);

  return 0 ;
}