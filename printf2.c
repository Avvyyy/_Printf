#include "main.h"

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
				i += printf("%d", va_arg(myInts, int));
				break;
		}

		format++;
	}

	va_end(myInts);
	return (i);
}
