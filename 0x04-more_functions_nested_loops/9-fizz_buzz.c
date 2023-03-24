#include "main.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line.
 *             But for multiples of three print Fizz instead of the number and
 *             for the multiples of five print Buzz. For numbers which are
 *             multiples of both three and five print FizzBuzz.
 *
 * Return: void
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
            print_number(i);
        }

        if (i != 100)
            _putchar(' ');
    }

    _putchar('\n');
}

/**
 * print_number - prints an integer to standard output
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10)
        print_number(n / 10);

    _putchar(n % 10 + '0');
}

