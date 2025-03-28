#include "main.h"
#include <stdarg.h>

int print_porciento(va_list args)
{
	void(args);
	return (write(1, "%", 1));
}
