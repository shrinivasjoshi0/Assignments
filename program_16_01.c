/*
Enter the number of elements : 6
Enter Elements :
12
10
51
62
30
25
Largest number is : 62
*/
#include<stdio.h>

int Maximum(int arr[] , int ilength)
{
   int icnt = 0 ;
    int icnt1 = 0 ;
    int max = arr[0];
   for(icnt=1 ; icnt<ilength ; icnt++)
   { 
    if(arr[icnt]>max)
    {
      max = arr[icnt]; 
    }
      
   }
   return max ;
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

  iRet = Maximum(p,iSize);

  printf("Largest number is : %d\n " , iRet);


  free (p);

  return 0 ;
}