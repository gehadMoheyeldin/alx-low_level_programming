#include <stdio.h>

/**
 * main - prints the program  name of the executable, followed by a new line
 * @argc: int
 * @argv: list
 * Return: always 0.
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
