/*
Enter a Number : 4
Area of Circle is : 50.240002
*/
#include<stdio.h>
void Display(int radious)
{
  float pi = 3.14f ;
 float result = radious * radious * pi ;
 printf("Area of Circle is : %f" , result);

}
  
int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 Display(iValue1);

 return 0 ;
}