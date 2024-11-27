#include "main.h"

/**
 *printea_char- funcion que printea un caracter
 *@args: Lista de argumentos que contiene el carácte
 *Return: Número de caracteres impreso
 */


int printea_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 *printea_string- Imprime una cadena de texto
 *@args: Lista de argumentos que contiene el caráct
 *Return: Número de caracteres impreso
 */

int printea_string(va_list args)
{
	char *string = va_arg(args, char *);
	int i, count = 0;

	if (string == NULL)
	{
		return(-1);
	}
		for (i = 0; string[i] != '\0'; i++)
		{
			count += write(1, &string[i], 1);
		}
	return(count);
}

/**
 *printea_porcentaje- Imprime el carácter'%'
 *@args: Lista de argumentos (no usado)
 *Return: Número de caracteres impreso
 */

int printea_porcentaje(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}

/**
 *printea_enteros- Convierte un entero en texto y lo imprime
 *@args: lista de argumentos
 *Return: Número de caracteres impresos o -1 en caso de erro
 */

int printea_enteros(va_list args)
{

	int n = va_arg(args, int);
	char buffer[69];
	int longitud;

	longitud = snprintf(buffer, sizeof(buffer), "%d", n);
	
	return (write(1, buffer, len));

}

