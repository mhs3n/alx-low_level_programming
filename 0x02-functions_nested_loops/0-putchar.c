#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program prints the string "_putchar" using the
 * putchar() function from the standard library.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    char putchar_string[] = "_putchar";

    for (i = 0; putchar_string[i] != '\0'; i++)
    {
        putchar(putchar_string[i]);
    }

    putchar('\n');

    return 0;
}

