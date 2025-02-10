/*

*/
#include<stdio.h>

void Maximum(int arr[] , int ilength)
{
   int icnt = 0 ;
    int icnt1 = 0 ;
    int min = arr[0];
    int max = arr[0];
   for(icnt=1 ; icnt<ilength ; icnt++)
   { 
    if(arr[icnt]>99)
    {
      printf("%d\t",arr[icnt]);
      icnt1++ ; 
    }
    
      
   }
   
   printf("The no.of elements who have 3 digits are : %d\n" , icnt1);
}


int main()
{ 
  int iSize = 0 ;
  int icnt = 0 ;
  int *p = NULL ;
  int iRet = 0 ;
  
  printf("\n Enter the number of elements : ");
  scanf("%d" , &iSize);
  
  p = (int *)malloc(iSize * sizeof(int));

  printf("\n Enter Elements : \n");
  for(icnt=0 ; icnt<iSize ; icnt++)
  {
    scanf("%d" , &p[icnt]);
  }

 Maximum(p,iSize);
  free (p);

  return 0 ;
}