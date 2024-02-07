
// take array from user and display largest number from an array


#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>


int Maximum(int Arr[] , int iLength)
{
 int iCnt = 0 ; int Max = 0;
 for(iCnt=0 ; iCnt<iLength ; iCnt++)
 {
  if(Arr[iCnt]>Max)
  {
    Max = Arr[iCnt];
    
  }
  
 }
return Max ;

}
int main()
{
 int iSize = 0 ; int iCnt= 0 ; int iValue = 0 ; int iRet = 0 ;
 int *p = NULL ; int iLength = 0 ;

 printf("Enter the Size of array :");
 scanf("%d" , &iSize);
  printf("Enter %d elements : \n" , iSize);

 //printf("Enter the Numbers :\n ");
 //scanf("%d" , &iValue);

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

 iRet = Maximum(p,iSize);
 printf("Largest Number is : %d\n", iRet);

 free(p);


  return 0 ;
}