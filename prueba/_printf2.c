#include "main.h"

/**
 *
 *
 *
 */


int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, contador = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
		while (format[i])
		{
			if (format[i] == '%')
			{	i++;
				if (format[i] == '\0')
					return (-1);
				switch (format[i])
				{
				case 'c':
					contador += printea_char(args);
					break;
				case '%':
					contador += printea_porcentaje(args);
					break;
				case 's':
					contador += printea_string(args);
					break;
				case 'd':
				case 'i':
					contador += printea_enteros(args);
					break;
				default:
					contador += write(1, "%", 1);
					contador += write(1, &format[i], 1);
					break;
			}	}
			else
			{
				contador += write(1, &format[i], 1);
			}
			i++;
		}
	va_end (args);
	return (contador);
}
