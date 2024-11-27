#include "main.h"

/**
 *
 *
 *
 */


int _printf(const char *format, ...)
{

	va_list args;
	int i = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);

		while (format && format[i] != '\0')
		{
			switch (format[i])
			{	
			case 'c':
			write("%c", (char) va_arg(argu, int));

		}


}
