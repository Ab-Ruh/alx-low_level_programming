/**
 * main - prints out multiple of 2 argument user inputs
 * @argv: prints out strings of input
 * @argc: counts the number of input
 * Return: 0
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
