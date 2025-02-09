/*
Enter the number of elements : 6
Enter Elements : 1
2
3
4
5
6
1       3       5       
product of odd elements are : 15
*/
#include<stdio.h>

void Display(int arr[] , int ilength  )
{
   int icnt = 0 ;
    int icnt1 = 0 ;
    int imul = 1 ;
    
   for(icnt=0 ; icnt<ilength ; icnt++)
   { 
    if(arr[icnt]%2 != 0)
    {
      printf("%d\t" , arr[icnt]);
      imul = imul * arr[icnt] ;
    }
      
   }
   printf("\n product of odd elements are : %d" , imul);
   
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