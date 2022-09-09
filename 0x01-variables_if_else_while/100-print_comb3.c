#include<stdio.h>

/**
 * main - print 2 digit combos
 *
 * Return: 0
 */
int main(void)
{
	int f = '0';
	int s = '0';

	while (f <= '8')
	{
		s = '1';
		while (s <= '9')
		{
			if (f < s)
			{
			putchar(f);
			putchar(s);
			if (f != '8' || s != '9')
			{
				putchar(',');
				putchar(' ');
			}
			}
			s++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
