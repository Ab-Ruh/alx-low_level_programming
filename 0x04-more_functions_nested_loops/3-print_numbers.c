#include "main.h"

/**
 * print_numbers - is a function that prints numbers from 0 to 9
 *
 *Return: the list of numbers in new line
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
}
