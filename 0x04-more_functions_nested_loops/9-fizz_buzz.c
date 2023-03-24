#include "main.h"
/**
 * fizz_buzz - prints the numbers from 1 to 100 followed by a new line
 * for multiples of 3 print Fizz instead of the number
 * for multiples of 5 print Buzz instead of the number
 * for multiples of both 3 and 5 print FizzBuzz instead of the number
 */
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
else if (i % 3 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}
else if (i % 5 == 0)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
else
{
int digits = 0, t = i;
while (t != 0)
{
digits++;
t /= 10;
}
t = i;
while (t != 0)
{
_putchar((t % 10) + '0');
t /= 10;
}
 while (digits < 2)
{
_putchar(' ');
digits++;
}
}
if (i < 100)
_putchar(' ');
}
_putchar('\n');
}

