/*

*/
#include<stdio.h>

void Display(int arr[] , int ilength , int iStart , int iEnd)
{
   int icnt = 0 ;
    int icnt1 = 0 ;
    int icnt2 = 0 ;
    
   for(icnt=0 ; icnt<ilength ; icnt++)
   { 
    if(arr[icnt]<iStart || arr[icnt]>iEnd)
    {
      printf("\n Out of range...\n");
      return -1 ;
    }
    else if(arr[icnt]%2 == 0)
    {
      printf("%d\t" , arr[icnt]);
    }
      
   }
   
}


int main()
{ 
  int iSize = 0 ;
  int icnt = 0 ;
  int *p = NULL ;
  int iStart = 0 ;
  int iEnd = 0 ;

  printf("Enter the number of elements : ");
  scanf("%d" , &iSize);
  
  printf("Enter start element  : ");
  scanf("%d" , &iStart);

  printf("Enter End element : ");
  scanf("%d" , &iEnd);

  p = (int *)malloc(iSize * sizeof(int));

  printf("Enter Elements : ");
  for(icnt=1 ; icnt<=iSize ; icnt++)
  {
    scanf("%d" , &p[icnt]);
  }

  Display(p,iSize , iStart , iEnd);

  free (p);

  return 0 ;
}