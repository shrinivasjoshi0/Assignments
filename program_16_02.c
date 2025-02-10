/*
Enter the number of elements : 6
Enter Elements :
12
1
4
5
6
11
Minium number is : 1
*/
#include<stdio.h>

int Maximum(int arr[] , int ilength)
{
   int icnt = 0 ;
    int icnt1 = 0 ;
    int min = arr[0];
   for(icnt=1 ; icnt<ilength ; icnt++)
   { 
    if(arr[icnt]<min)
    {
      min = arr[icnt]; 
    }
      
   }
   return min ;
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

  printf("Minium number is : %d\n " , iRet);


  free (p);

  return 0 ;
}