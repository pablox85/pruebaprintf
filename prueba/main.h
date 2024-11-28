#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

typedef struct specifier
{
    char especificador;
    int (*funcion)(va_list);
} spec_t;

int _printf(const char *format, ...);
extern spec_t specs[];

int printea_char(va_list args);
int printea_string(va_list args);
int printea_porcentaje(va_list args);
int printea_enteros(va_list args);
int printea_enteros_sin_signos(va_list args);
#endif
