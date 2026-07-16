*Este proyecto ha sido creado como parte del currículo de 42 por mostoloz y francysa.*

# Push_swap - Ordenar datos.


## Descripción
El programa manipula dos stacks de datos en forma de pila, llamados Stack A y Stack B. El objetivo es ordenar numeros enteros recibidos de manera ascendente dentro del Stack A.

Se hace con un conjuto limitado de instrucciones y utilizando el menor número posible de acciones. Para conseguirlo se utilizan varios algoritmos para lograr ordenar los datos de la forma mas optimizada.

Cuenta con un **selector de estrategia**:

**--simple** fuerza el uso de el algoritmo O(*n*2) seleccionado.

**--medium** fuerza el uso de el algoritmo O(*n*√*n*) seleccionado.

**--complex** fuerza el uso de el algoritmo O(*n*log*n*) seleccionado.

**--adaptive** fuerza el uso de el algoritmo adaptativo basado en desorden seleccionado. Este será el comportamiento por defecto si no se indica un selector

Tambien con un **modo benchmarck** (`--bench`):

Que muestra métricas detalladas.

Índice de **Desorden**:

El proyecto calcula inicialmente un coeficiente entre `0` y `1` mediante una funcion. A partir de este indice, se bifurca en tres implementaciones:
Desorden bajo (<0.2)
Desorden medio (0.2 a 0.5)
Desorden alto (>=0.5)

## Explicación y justificación del algoritmo

La arquitectura adaptativa del programa se diseñó bajo un principio estricto: No existe un algoritmo único ideal para todos los escenarios de desorden numérico. Cada lógica se seleccionó mediante prueba, error y muchos intentos hasta lograrlo.

* **simple**:

* **Chuncks para Algoritmo intermedio:** Al dividir el Stack A en subconjuntos de tamaño `raiz curadrada de n`, limitamos el radio de búsqueda del programa. Cuando buscamos el número más óptimo para mover al Stack B, las rotaciones (ra / rra) requeridas son mínimas porque los elementos candidatos están geográficamente cerca de la superficie del stack. Esto permite batir con holgura el límite de los movimientos exigido.

* **Radix para Algoritmo complejo:** Radix ofrece predictibilidad absoluta y consistencia ciega. Al mapear previamente los números a índices correlativos de `0` a `size - 1`, nos independizamos de la magnitud de los números originales. Evaluar el bit menos significativo en cada pasada garantiza que el programa realice exactamente el mismo número de comprobaciones por elemento, logrando un flujo constante y seguro que estabiliza el conteo de movimientos por debajo de los límites críticos de aprobado en listas grandes.

### Contrubucion de cada estudiante:

| Funciones de: | Nombre:       | Descripcion:                 |
|---------------|---------------|------------------------------|
| main.c | mostoloz y francysa | Fuimos adaptando juntos a medida que ibamos avanzando la funcion para ir probando el programa cada uno con su parte, y luego juntos.|
| checks.c, ft_atol, free.c, ft_flags | francysa | El chequeo para validar que sean numeros, enteros, no sean duplicados, no superen los límites.|
|calculate_disorder.c, create_list.c, validate_imput.c | moztoloz | Ver el índice de desorden, crear la ista doblemente enlazada con el stack y validar.|
|simple_sort.c, Makefile | mostoloz | Algoritmo simple y Makefile junto con la libft y el ft_printf. |
| medium_sort.c, chuncks.c, complex_sort | francysa | Algoritmo intermedio y complejo. |
| sort_five.c, sort_three.c | mostoloz | Casos especificos con desorden de numeros. |
| nodos.c, t_index.c | francysa | Ajuste de algunas funciones de Libft para nuestras listas y Indexacion. |
| push_swap.h | mostoloz y francysa | Hemos ido construyendo justos el header a medida que vamos avanzando. |
| swap.c, rotate.c | mostoloz | movimientos en las pilas. |
| revers.c., push.c | francysa | movimientos en las pilas. |



## Instrucciones
El proyecto incluye un `Makefile` que compila la parte obligatoria, clona e repositorio y ejecuta:

`make` o `make all`: Compila los archivos base y genera el programa push_swap.

### Ejecucion
El programa recibe una lista de numeros enteros como argumentos independientes o agrupadps en un solo string. Por ejemplo ejecuta:

`./push_swap 1254 856 254 369 578`

**SELECTOR DE ESTRATEGIA**

Puedes utilizar flags para forzar el uso de una lógica concreta. Por ejemplo ejecuta:

`./push_swap --bench --adaptive 4 67 3 87 23`

**MODO BENCH**

Para ver el índice de desorden, la estragegia que se ha utilizadp, el total de movimientos y cuantos de cada uno ha utilizado. Por ejemplo ejecuta:

`./push_swap --bench 4 67 3 87 23`

### Comandos Utiles:

`make clean`: Elimina los archivos objeto (.o).

`make fclean`: Elimina los objetos y los binarios ejecutables finales. 

`make re`: Limpia y vuelve a compilar todo.

Puedes validar la ausencia de fugas de memoria utilizand:
`valgrind --leak-check=full --track-origins=yes ./push_swap 5 3 4 1 2`

## Recursos
Para el diseño, la optimización y el blindaje del proyecto, se utilizaron los siguientes recursos y herramientas de la comunidad:

* Visualizadores de Stacks: Uso de herramientas de simulación gráfica como push_swap_visualizer para analizar el comportamiento tridimensional de los chunks y la migración de bits en Radix.

* Pruebas de Estrés (Testers): Utilización de generadores de números aleatorios automatizados (push_swap_tester) para evaluar la eficiencia de movimientos en arrays de 100 y 500 elementos.

* Herramientas de Diagnóstico de Bajo Nivel:
	Valgrind (Memcheck): Herramienta principal para interceptar saltos condicionales erróneos provocados por la lectura de memoria basura en el parsing y corregir las fugas en la estructura t_bench y listas enlazadas.

## Explicación y justificación del algoritmo

La arquitectura adaptativa del programa se diseñó bajo un principio estricto: No existe un algoritmo único ideal para todos los escenarios de desorden numérico. Cada lógica se seleccionó mediante prueba, error y muchos intentos hasta lograrlo.

* **simple**:

* **Chuncks para Algoritmo intermedio:** Al dividir el Stack A en subconjuntos de tamaño `raiz curadrada de n`, limitamos el radio de búsqueda del programa. Cuando buscamos el número más óptimo para mover al Stack B, las rotaciones (ra / rra) requeridas son mínimas porque los elementos candidatos están geográficamente cerca de la superficie del stack. Esto permite batir con holgura el límite de los movimientos exigido.

* **Radix para Algoritmo complejo:** Radix ofrece predictibilidad absoluta y consistencia ciega. Al mapear previamente los números a índices correlativos de `0` a `size - 1`, nos independizamos de la magnitud de los números originales. Evaluar el bit menos significativo en cada pasada garantiza que el programa realice exactamente el mismo número de comprobaciones por elemento, logrando un flujo constante y seguro que estabiliza el conteo de movimientos por debajo de los límites críticos de aprobado en listas grandes.
