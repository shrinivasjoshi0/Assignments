#include<stdio.h>
#include<stdlib.h>


int Difference(int arr[] , int iLength)
{
  int iSum = 0 ; int iOdd = 0 ; int iCount = 0;
  int i = 0 ;
  for(i=0 ; i<iLength ; i++)
  {
    if(arr[i]%2==0)
    {
      iSum = iSum + i ;
    }
    else if(arr[i] % 2 != 0)
    {
      iOdd = iOdd + i ;
    }

  }
  return (iSum-iOdd);

}



int main()
{
 int iSize = 0 ; int i = 0;
 int iRet = 0 ; int iCnt=0;
 int *p = NULL ;

 printf("Enter the number of Elements : \t\n");
 scanf("%d" , &iSize);

 p = (int*)malloc(iSize * sizeof(int));

 if(p == NULL)
 {
  printf("Unable to allocate memory\n");
  return -1 ;
 }
 printf("Enter %d elements \n" ,iSize);

for(iCnt=0 ; iCnt<iSize ; iCnt++)
{
  
  scanf("%d" , &p[iCnt]);
}
iRet = Difference(p , iSize);
printf("Result is : %d" , iRet);
free(p);
 return 0 ;
}