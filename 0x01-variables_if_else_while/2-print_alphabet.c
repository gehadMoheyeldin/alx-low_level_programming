#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description :prints the alphabet in lowercase
* Return: Always 0 (Success)
*/
int main(void)
{
int ch  = 'a';
while(ch <= 'Z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
