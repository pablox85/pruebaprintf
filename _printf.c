#include "main.h"
#include <stdarg.>
/**
 * _printf - igual al printf
 * @format: arreglo de caracteres
 * Return: caracteres a imprimir
 */
int _printf(const char *format)
{
	va_list args;
	int i = 0, count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			va_end(args);
			return (-1);
		}
		else if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == '%')
			{
				count += print_porciento(args);
			}
			else
			{
				count += especifico(args, format[i]);
			}
		}
		else
		{
			count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
