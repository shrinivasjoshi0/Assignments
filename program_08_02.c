/*
Enter a Height and Width : 2.4 3.5
Area of Rectange is : 8.400001
*/
#include<stdio.h>
void Display(float fheight , float fwidth)
{

 float fresult = fheight * fwidth ;
 printf("Area of Rectange is : %f" , fresult);

}
  
int main()
{
 float fValue1=0 ;
 float fValue2=0 ;

 printf("Enter a Height and Width : ");
 scanf("%f%f" , &fValue1 , &fValue2);

 Display(fValue1 , fValue2);

 return 0 ;
}