#include<stdio.h>
#include<stdlib.h>


void Display(int arr[] , int iLength)
{
    int i = 0 ;
    printf("\nThe numbers which are devisible by 3 and 5 : \n\n");
  for(i=0 ; i<iLength ; i++)
  {
    if((arr[i]%5==0) && (arr[i]%3 == 0))
    {
      printf("%d\t\t" , arr[i]);
    }
  }

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
 Display(p , iSize);
// printf("Result is : %d" , iRet);
free(p);
 return 0 ;
}