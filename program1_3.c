// Accept one number from user and print that number of even numbers on screen
// input : 7
// 2  4  6  8  10  12  14  



#include<stdio.h>


void printEven(int iNo)
{
    int i = 0 ;
    if(iNo <= 0 )
    {
      return ;
    }
 for(i=0 ; i<iNo ; i++)
 {
    int ans = 2*(i+1);
    printf("%d\t" , ans);
 }

}
int main()
{
    int iValue  = 0 ;
    printf("Enter Number : ");
    scanf("%d" , &iValue);

    printEven(iValue);

    return 0 ;
}