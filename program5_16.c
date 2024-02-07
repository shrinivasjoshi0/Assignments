
//Accept N number and display sum of digits
// 8225 = 17


#include<stdio.h>
#include<stdlib.h>



void Summation(int Arr[] , int iLength)
{
 int iCnt = 0 ; int Digit = 0 ;
 int Count = 0; int iSum = 0 ;
 for(iCnt=0 ; iCnt<iLength ; iCnt++)
 {
    while(Arr[iCnt] != 0)
    {
        Digit = Arr[iCnt] % 10 ;
        
        iSum = iSum + Digit; 
        Arr[iCnt] = Arr[iCnt] / 10 ;
    
    }
    printf("%d\n" , iSum);
    iSum = 0 ;
 }
 
}
int main()
{
 int iSize = 0 ; int iCnt= 0 ; int iValue = 0 ; int iRet = 0 ;
 int *p = NULL ; int iLength = 0 ;

 printf("Enter the Size of array :");
 scanf("%d" , &iSize);
  printf("Enter %d elements : \n" , iSize);


 p = (int *)malloc(sizeof(int));

 if(p==NULL)
 {
  printf("Unable to allocate the memory...!");
  return -1 ;
 }



 for(iCnt = 0 ; iCnt < iSize ; iCnt++)
 {
  printf("Enter Element %d\t :" , iCnt+1);
  scanf("%d" , &p[iCnt]);
 }

  Summation(p,iSize);
 //printf("ThreeDigits numbers are : %d\n", iRet);

 free(p);


  return 0 ;
}