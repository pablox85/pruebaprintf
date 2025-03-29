#include "main.h"
#include <stdarg.h>
/**
 * _printf - igual al printf
 * @format: arreglo de caracteres
 * Return: caracteres a imprimir
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i;

	va_start(args, format);
	return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			count += especifico(args, format[i]);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}

		va_end(args);
		return (count);
}
