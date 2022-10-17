#include "main.h"

/**
 * _printf - You want to print something? Here is the function you needs
 * @format: Character string to print - may contain directives.
 *
 * Return: 0 on success
 */
int _printf(const char *format, ...)
{
	va_list args;
	int ret;

	va_start(args, format);

	for (ret = 0; *(format + ret); ret++)
	{
		if (*(format + ret) == '%')
		{
			ret++;
			converter(format + ret)(args);
		}

		else
			write(1, (format + ret), 1);
	}

	return (ret);
}
