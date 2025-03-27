#include <unistd.h>
#include <stdarg.h>
#include "main.h"

int print_int(va_list arg)
{
	int d = va_arg(arg, int);
	int digito[11], contador = 0, i = 0, is_negative = 0;

	if (d == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (d < 0)
	{
		write(1, "-", 1);
		d = -d;

		is_negative = 1;
	}
	while (d > 0)
	{
		digito[contador] = (d % 10) + '0';
	}
	return (contador + is_negative).
}
