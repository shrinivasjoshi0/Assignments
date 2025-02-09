/*
Enter the number of elements : 6
Enter Elements : 15
20
27
30
99
45
15      30      45
 Number of Even elements devided by 5 is : 3
*/
#include<stdio.h>

void Display(int arr[] , int ilength)
{
   int icnt = 0 ;
    int icnt1 = 0 ;
   for(icnt=1 ; icnt<=ilength ; icnt++)
   { 
      if(arr[icnt]%5 == 0 && arr[icnt]%3 == 0)
      {
      printf("%d\t" , arr[icnt]);
      icnt1++ ;
      }
   }
   printf("\n Number of Even elements devided by 5 is : %d" , icnt1);

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