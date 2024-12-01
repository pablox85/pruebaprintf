<H1>Customized printf</H1>
<h2>Project Description:</h2>The project consists of making a function similar to printf

<h3>Structures Creation</h3>
<ul>
<li>printing_char</li>
<li>printing_string</li>
<li>printing_porcentaje</li>
<li>printing_enteros</li>
<li>printing_unsigned</li>
</ul>

<h3><strong><li>printing_char</li></strong></h3>
La funcion recibe un paramentro de <strong>(va_list args)</strong> 
y devuelve un valor de tipo <strong>(int)</strong>.
Declaramos la variable <strong>char c</strong>asi almacenamos 1 char.<br>
En <strong>c = va_arg(args, int)</strong> obtiene el argumento de la lista 
y asume que es de tipo <strong>int.</strong>

<h3><strong><li>printing_string</li></strong></h3>
La funcion se encarga de imprimir una cadena de texto caracter por caracter
y despues devuelve la cantidad de chars escritos.
<h4>Como funciona?</h4>
Toma un argumento de tipo string <strong>(puntero char*)</strong>
lo imprime caracter por caracter usando <strong>write</strong>
y devuelve la catidad de caracteres impresos.<br>
Ademas si la string es NULL imprime <strong>"(null)"</strong> en vez de fallar.<br>
Con la keyword <strong>return</strong> traemos el valor almacendado de cantida de caracteres


<h3><strong><li>printing_percent</li></strong></h3>
La funcion recorre la string buscando ('%%'), cuando lo encuentra lo almacena y nos devuelve ('%') en la variable return.

<h3><strong><li>printing_int</li></strong></h3>
La funcion recorre la string hasta econtrar el caracter nulo ('\0'), luego almacena los caracteres para imprimirlos, ademas de contar la catidad y guardarlos en la variable (count).

<h2>Authors: Brahian Amaral & Pablo Perez</h2>
