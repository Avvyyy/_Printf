#include "main.h"

/**
 * _printint - Function to print an integer to the standard output
 * @n: Integer to be printed
 *
 * Return: The printed integer
 */

int _printint(int n)
{
	unsigned int j;
	int len = 0;

	if (n < 0)
	{
		len = _putchar('-');
		j = -n;
	}
	else
		j = n;

	if (n / 10)
	{
		len += _printint(j / 10);
	}

	len += _putchar((j % 10) + '0');

	return (len);
}

/**
 * _printf - Function to handle integer type conversion in printf
 *@format: Pointer to format string
 *
 * Return: Integer that represents the number of charcaters printed
 * else, -1
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list myInts;

	va_start(myInts, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		switch (*format)
		{
			case 'd':
			case 'i':
				i += _printint(va_arg(myInts, int));
				break;
		}

		format++;
	}

	va_end(myInts);
	return (i);
}
