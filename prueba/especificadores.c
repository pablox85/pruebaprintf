#include "main.h"

/**
 *specs- Array de especificadores y funciones asociadas
 *
 */

spec_t specs[] =
{
	{'c', printea_char},
	{'s', printea_string},
	{'%', printea_porcentaje},
	{'d', printea_enteros},
	{'i', printea_enteros},
	{'\0', NULL}
};

