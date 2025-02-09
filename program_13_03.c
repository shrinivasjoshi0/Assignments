/*
Enter the number of elements : 7
Enter Elements : 15
20
30
35
40
52
80
      30      40      20      80
 Number of Even elements devided by 5 is : 6
*/
#include<stdio.h>

void Display(int arr[] , int ilength)
{
   int icnt = 0 ;
    int icnt1 = 0 ;
   for(icnt=1 ; icnt<=ilength ; icnt++)
   { 
      if(arr[icnt]%5 == 0 && arr[icnt]%2 == 0)
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