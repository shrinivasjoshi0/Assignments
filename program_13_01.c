/*
Enter a Number of Elements : 5
 Enter 5 Elements :
 Enter element 1 : 1
 Enter element 2 : 2
 Enter element 3 : 3
 Enter element 4 : 4
 Enter element 5 : 5
 Result is : -1
*/
#include<stdio.h>
int DisplayDiff(int arr[] , int ilength)
{
  int icnt= 0 ;
  int isumcnt = 0 ;
  int isum1 = 0 ;
  int isum2 = 0 ;
  int ioddcnt = 0 ;

  for(icnt= 0 ; icnt<ilength ; icnt++)
  {
    if(arr[icnt]%2 == 0)
    {
      
      printf("%d\t" , arr[icnt]);
      isum1 = isum1 + arr[icnt] ;
      isumcnt++ ;
    }
    else
    {
      printf("%d\t" , arr[icnt]);
      isum2 = isum2 + arr[icnt] ;
      ioddcnt++ ;
    }  
    int iresult = isum1 - isum2 ;
    return iresult ;
  }
}
int main()
{
 int  iValue1=0 ;
 int iSize = 0 ;
 int iret = 0 ;
 int icnt = 0 ;
 int *p = NULL ;
 

  printf("Enter a Number of Elements : ");
 scanf("%d" , &iSize) ;

 p = (int*)malloc (iSize * sizeof(int));
 if(p==NULL)
 {
  printf("Unable to allocate memory");
  return -1 ;
 }

 printf("\n Enter %d Elements : " ,iSize);

for(icnt= 0 ; icnt<iSize ; icnt++)
{
  printf("\n Enter element %d : " , icnt+1);
    scanf("%d" , &p[icnt]);
}


iret = DisplayDiff(p,iSize);
printf("\n Result is : %d" , iret);

free(p);
 return 0 ;
}