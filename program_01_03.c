#include<stdio.h>

void Display()
{
    int i = 0 ;
    int j = 5 ;
    while(i<j)
    {
        printf("%d\n" , j);
        j-- ;
    }
}

int main()
{
    Display();


    return 0 ;
}