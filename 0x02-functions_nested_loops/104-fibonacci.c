#include "main.h"

/**
 * numLength - returns the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
 */
int numLength(int num)
{
int lenght = 0;
if (!num)
return (1);
while (num)
{
	num = num / 10;
	lenght += 1;
}
return (lenght);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 fibonacci numbers
 * starting with 1 and 2 follwed by a new line
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
int count, initial0s;
unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, fl0 = 0, f20 = 0, sumo = 0;

for (count = 1; count <= 98; count++)
{
if (fl0 > 0)
printf("%lu", fl0);
initial0s = numLength(mx) - 1 - numLength(f1);

while (fl0 > 0 && initial0s > 0)
{
printf("%d", 0);
initial0s--;
}
printf("%lu", f1);

sum = (f1 + f2) % mx;
sumo = f10 + f20 + (f1 + f2) / mx;
f1 = f2;
f10 = f2o;
f2 = sum;
f20 = sumo;

if (count != 98)
printf(",");
else
printf("\n");
}

return (0);

}
