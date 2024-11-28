<h1> Manual de Pintf (personalizado) Holberton </h1>

<h2>Descripcion del proyecto:</h2><br>
El proyecto consiste en hacer parte del "printf" siguiendo ciertas pautas.<br>

<h2><li> Printea char</h2></li><br>
Utiliza la lista de argumentos <strong>va_arg</strong>.<br>
Luego lo almancen en una variable C.<br>
Usa write para escribir la salida.<br>
<strong>Return:</strong> Imprime un caracter unico.

<h2> <li>Printea string </li></h2><br>
La funcion printea_string recorre una string hasta el carcter nulo (\0).<br>
 1 - Obtiene la cadena de texto de una lista de argumentos <strong>va_arg</strong>.<br>
 2 - Si la cadena es null retorna -1 (indicador de error).<br>
 3 - Imprime la cadena usando Write.<br>
 4 - Cuenta el numero de caracteres y los retorna.<br>
<strong> Return:</strong> Devuelve el total de caracteres impresos

<h2><li> Printea porcentaje</h2></li><br>
El objetivo de printea_porcentaje es encontrar '%' e imprimirlo.<br>
No se utiliza args.<br>
Se lo declara con <strong>(void)args</strong> evitando advertencias del compilador.<br>
Usa Write para escribir '%'.<br>
<strong> Return:</strong> Al econtrar el ' %% ' retorna '%' 

<h2><li> Printea enteros</h2></li><br>
La funcion <strong>printea_enteros</strong> convierte numeros enteros en texto.<br>
Utiliza la lista de argumentos <strong>va_args</strong> para obtener un int.<br>
Inicia variable para llevar un conteo de los caracteres y manejar el numero como string.<br>
Si el numero es negativo:
1 - Imprime "-" para el signo.<br>
2 - Lo convierte en positivo.<br>
3 - Incrementa el contador.<br>
4 - Luego descompone el numero en digitos.<br>
5 - Obteniendo el ultimo digito utilizando (num % 10) y lo convierte en caracter.<br>
6 - Almacena el caracter en string.<br>
7 - Luego divide en numero entre 10 para eliminar el ultimo digito.<br>
-Luego del bucle los digitos quedan en orden inverso.<br>
-Otro bucle recorre el string desde el final al princion (i_2--).<br>
<strong>Return:</strong> Devuelve el totale de caracteres impresos.<br>
<h4>Autores:</h4> <h3>Brahian Amaral & Pablo Perez </h3>
