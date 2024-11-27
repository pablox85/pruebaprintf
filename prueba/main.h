#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

typedef struct specifier
{
	char especificador;
	int (*funcion)(va_list args);
}
	spec_t;

int _printf(const char *format, ...);
int printea_char(va_list args);
int printea_string(va_list args);
int printea_porcentaje(va_list args);
#endif
