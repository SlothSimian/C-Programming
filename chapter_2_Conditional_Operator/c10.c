/* 
   Wap to find if a character entered is lower case or not
   ASCII  value for lowercase alphabets(a-z) starts from 97 and ends on 122.
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("The character is in lowercase.");
    }
    else
    {
        printf("The charcater is in uppercase.");
    }

    return 0;
}