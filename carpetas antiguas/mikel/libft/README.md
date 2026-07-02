*Este proyecto ha sido creado como parte del currículo de 42 por mostoloz*

# Libft

## Descripción

Libft es una libreria que vuelve a crear varias funciones utiles de libc y para gestionar listas para poder utilizarse en futuros proyectos del currículo de 42.

## Instrucciones
`git clone` del siguiente repositorio:
```bash
git@vogsphere.42urduliz.com:vogsphere/intra-uuid-219f7975-778d-431d-b965-b60c84706d7f-7378066-mostoloz
```
### MakeFile
Para compilar la librería utilizar el comando `make`, que generara los archivos **.o** necesarios para que funcione la librería. Si se cambiara algo de alguna de las funciones, para recompilar se puede utilizar el comando `make re`, que compilara solo los cambios nuevos. En caso de querer borrar los **.o**, se podrá utilizar el comando `clean`, y si se quiere eliminar todo, se puede usar el comando `fclean`. Luego solo faltaría importar el libft.h a la función en la que lo necesites.
```c
#include <localizacion/del/libft>
```

## Descripción

### Parte 1
| Nombre  | Descripcion |
|:-------------:|:-------------|
| isalpha       | Comprueba si el caracter es alfabético|
| isdigit     | Comprueba si el caracter es un digito|
| isalnum      | Comprueba si el caracter es alfanumerico|
| isascii      | Comprueba si el caracter es Ascii     |
| isprint      | Comprueba si el caracter es imprimible|
| strlen      | Devuelve el largo de un string |
| memset      | Llena *n* bytes de memoria con un byte     |
| bzero      | Llena *n* bytes de memoria con cero     |
| memcpy      | Copia *n* bytes de un area de memoria a otra     |
| memmove      | Copia *n* bytes de un area de memoria a otra que se solapa     |
| strlcpy      | Copia *n* bytes de un string a otro     |
| strlcat      | Concatena *n* bytes de un string a otro     |
| tolower      | Transforma un caracter mayuscula en minuscula     |
| toupper      | Transforma un caracter minuscula en mayuscula     |
| strchr      | Devuelve un puntero a la primera posicion de un caracter en un string     |
| strrchr      | Devuelve un puntero a la última posicion de un caracter en un string     |
| strncmp      | Compara si un string es mayor, menor o igual a otro     |
| memchr      | Devuelve un puntero a la primera posicion de un byte en un area de memoria     |
| memcmp      | Compara si un area de memoria es mayor, menor o igual a otra     |
| strnstr      | Busca una subcadena en una cadena mayor     |
| atoi      | Transforma una cadena de digitos en un entero     |
| calloc      | Asigna *n* espacios de memoria y los inicia en 0     |
| strdup      | Duplica un string en otro     |

### Parte 2
| Nombre  | Descripcion |
|:-------------:|:-------------|
| substr       | Devuelve una subcadena de un string recibiendo las posiciones inicial y final|
| strjoin     | Devuelve una nueva cadena concatenando los dos strings que recibe|
| strtrim      | Devuelve una copia del string que recibe habiendo eliminado los caracteres que recibe en el inicio y el final|
| split      | Divide el string que recibe en palabras delimitadas por un caracter que recibe y devuelve un array bidimensional que contiene cada palabra     |
| itoa      | Devuelve un string que representa el valor del entero recibido|
| strmapi      | Aplica la funcion que recibe a cada caracter de la cadena que recibe y devuelve una nueva cadena con el resultado|
| striteri      | Aplica la funcion que recibe a cada caracter de la cadena que recibe |
| putchar_fd      | Escribe el caracter que recibe en el archivo especificado     |
| putstr_fd      | Escribe el string que recibe en el archivo especificado     |
| putendl_fd      | Escribe el string que recibe seguido de un salto de linea en el archivo especificado     |
| putnbr_fd      | Escribe el entero que recibe en el archivo especificado     |

### Parte 3
Esta parte utiliza una estructura para manejar listas enlazadas:
```c
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
```

| Nombre  | Descripcion |
|:-------------:|:-------------|
| lstnew       | Devuelve un nuevo nodo con el contenido que recibe|
| lstadd_front     | Añade el nodo que recibe al principio de la lista que recibe|
| lstsize      | Devuelve el largo de una lista |
| lstlast      | Devuelve el ultimo nodo de luna lista     |
| lstadd_back      | Añade el nodo que recibe al final de la lista que recibe|
| lstdelone      | Elimina el nodo que recibe con la funcion para eliminar que recibe |
| lstclear      | Elimina todos los nodos de una lista que recibe con la funcion para eliminar que recibe |
| lstiter     | Aplica la funcion que recibe en cada nodo de una lista que recibe |
| lstmap      | Aplica la funcion que recibe en cada nodo de una lista que recibe. Devuelve una nueva lista con el resultado     |

## Recursos
[Die](https://www.die.net/)
He usado die para ver el manual de las funciones de la parte 1

[Compilador Online](https://www.onlinegdb.com/online_c_compiler)
He usado el compilador para hacer las pruebas necesarias en cada funcion y ver los valores de las variables en los puntos que me interesaban

[Stack Overflow](https://stackoverflow.com/questions/46853908/how-to-implement-calloc)
He utilizado Stack Overflow para intentar resolver dudas mas concretas que me iban surgiendo

[Zeus (Tester)](https://github.com/ander-vieira/42zeus)
He utilizado Zeus para hacer pruebas concretas que puede que no se me hayan ocurrido

[WarMachine (Otro Tester)](https://github.com/0x050f/libft-war-machine)
WarMachine es otro tester que he utilizado para asegurarme de que todo vaya bien
