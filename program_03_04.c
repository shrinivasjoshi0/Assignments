#include <stdio.h>

void DisplayConvert(char ch)
{
    if (ch >= 'A' && ch <= 'Z') // Check if ch is uppercase
    {
        ch = ch + ('a' - 'A');
         printf("%c" , ch);
    }
    else if( ch >= 'a' && ch <= 'z' )
    {
        ch = ch + ('A' - 'a');
         printf("%c" , ch);
    }
    else{}
   

}

int main()
{
    char uppercase, lowercase;

    printf("Enter  character: ");
    scanf("%c", &uppercase);

    DisplayConvert(uppercase);

    return 0;
}
