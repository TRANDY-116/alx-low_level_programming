#include <stdio.h>
/**
 * main - print all letters of the alphabet in lowercase
 * except the letters q and e
 * return 0 (success)
 */
int main(void)
{
        int ch;
        for (ch = 'a';ch <= 'z';ch++)
        {
                if (ch != 'q' && ch != 'e')
                        putchar(ch);
        }
        putchar('\n');
        return (0);
}
