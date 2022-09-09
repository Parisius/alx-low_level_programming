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
	int d;
	int temp = '0';
	for (a = '0' ; a <= '9' ; a++)
	{
		for (b = '0' ; b <= '9' ; b++)
		{
			if (a == '9' && b == '9')
			{
				break;
			}
			for (c = '0' ; c <= '9' ; c++)
			{
				if (a == c)
				{
					temp = b + 1;
				}
				else
				{
					temp = '0';
				}
				for (d = temp ; d <= '9' ; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (!(a == '9' && b == '8' && c == '9' && d == '9'))
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
