/**
* print_numbers - prints out the integers separated by the separator character.
*
* @separator: a string that will be printed between each number
* @n: The number of integers to be printed.
*/
#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0;  i < n;  i++)
{
printf("%d", va_arg(args, int));

if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

va_end(args);

printf("\n");
}
