/*
Enter the number of elements : 6
Enter Elements : 85 66 3 80 93 88
66      80      88
 Frequency of Even numbers : 3

*/
#include<stdio.h>

void Display(int arr[] , int ilength)
{
   int icnt = 0 ;
    int icnt1 = 0 ;
   for(icnt=1 ; icnt<=ilength ; icnt++)
   { 
      if(arr[icnt]%2 == 0 )
      {
      printf("%d\t" , arr[icnt]);
      icnt1++ ;
      }
   }
   printf("\n Frequency of Even numbers : %d" , icnt1);

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