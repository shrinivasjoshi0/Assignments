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
    if(arr[icnt]<min)
    {
      min = arr[icnt]; 
    }
    else if(arr[icnt]>max)
    {
      max = arr[icnt];
    }
    else{}
      
   }
   int Diff = min - max ;
   printf("The Difference is : %d\n" , Diff);
}


int main()
{ 
  int iSize = 0 ;
  int icnt = 0 ;
  int *p = NULL ;
  int iRet = 0 ;
  
  printf("Enter the number of elements : ");
  scanf("%d" , &iSize);
  
  p = (int *)malloc(iSize * sizeof(int));

  printf("Enter Elements : \n");
  for(icnt=0 ; icnt<iSize ; icnt++)
  {
    scanf("%d" , &p[icnt]);
  }

 Maximum(p,iSize);
  free (p);

  return 0 ;
}