#include <stdio.h>


/**
 * main - print the number of arguments of the program separated by new line.
 * @argc: int
 * @argv: list
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	int number = 0;

	while (number < argc)
	{
		printf("%s\n", *(argv + number));
		number++;
		(*argv)++;
	}
	return (0);
}
