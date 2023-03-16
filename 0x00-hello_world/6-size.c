#include <stdio.h>
/**
 * main - Entry point of the program
 * Description:'using sizeof various variable types'
 * Parameters:no input returns an int
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("size of a char: %u byte(s)\n", sizeof(char));
	printf("size of an int: %u byte(s)\n", sizeof(int));
	printf("size of a long int: %u bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %u bytes(s)\n", sizeof(long long int));
	printf("size of a float: %u byte(s)\n", sizeof(float));

	return (0);
}
