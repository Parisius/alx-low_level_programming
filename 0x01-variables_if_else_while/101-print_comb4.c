#include<stdio.h>

/**
 * main - print 2 digit combos
 *
 * Return: 0
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';

	for (a = '0' ; a <= '8' ; a++)
	{
		for (b = '1' ; b <= '9' ; b++)
		{
			for (c = '2' ; c <= '9' ; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7' || b != '8' || c != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
