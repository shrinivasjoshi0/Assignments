#include <stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

bool ChkVowel(char ch)
{
    // Check if the character is a vowel (both uppercase and lowercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // Added space before %c to skip any leading whitespace
    bool bRet = FALSE;

    bRet = ChkVowel(ch);
    if (bRet == TRUE)
    {
        printf("Character is a Vowel\n");
    }
    else
    {
        printf("Character is not a Vowel\n");
    }
    return 0;
}
