#include <stdio.h>
#include "main.h"

/**
 * times_table - print out times table of 0 to 12
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
		{
			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= n; j++)
				{
					k = i * j;
					if (k <= 9)
					{
						if (j != 0)
						{
							_putchar(' ');
							_putchar(' ');
						}
						_putchar(k + '0');
					}
					else if (j != '0')
						{
							_putchar(' ');
						_putchar(k / 10 + '0');
						_putchar(k % 10 + '0');
						}
					else
					{
						if (j != 0)
						{
							_putchar(k % 100 + '0');
							_putchar(k / 10 + '0');
						}
					}

			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
			}
				}
				j = 0;
			}
		}
}

