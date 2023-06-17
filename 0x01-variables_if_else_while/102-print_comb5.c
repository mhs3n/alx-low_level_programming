#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */
int main()
{
	int i, j;
	for (i = 0; i < 100; i++) {
        	for (j = 0; j < 100; j++) {
            		// Print tens digit of first number
            		putchar('0' + i / 10);
            		// Print ones digit of first number
            		putchar('0' + i % 10);
            		// Print space separator
           		putchar(' ');
            		// Print tens digit of second number
            		putchar('0' + j / 10);
            		// Print ones digit of second number
            		putchar('0' + j % 10);
            		// Print comma separator
            		putchar(',');
            		// Print space separator
            		putchar(' ');
        		}
    		}	

	return 0;
}
