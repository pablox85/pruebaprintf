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

		while (format && format[i] != '\0')
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
				}
			}
			else
			{
				contador += write(1, &format[i], 1);
			}

			i++;
		}
	va_end (args):	
	return(contador);
}
