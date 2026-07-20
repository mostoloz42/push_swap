*Este proyecto ha sido creado como parte del currículo de 42 por mostoloz y francysa.*

# Push_swap - Ordenar datos.


## Descripción
El programa manipula dos stacks de datos en forma de pila, llamados Stack A y Stack B. El objetivo es ordenar números enteros recibidos de manera ascendente dentro del Stack A.

Se hace con un conjunto limitado de instrucciones y utilizando el menor número posible de acciones. Para conseguirlo se utilizan varios algoritmos para lograr ordenar los datos de la forma más optimizada.

Cuenta con un **selector de estrategia**:

**--simple** fuerza el uso de el algoritmo O(*n*2) seleccionado.

**--medium** fuerza el uso de el algoritmo O(*n*√*n*) seleccionado.

**--complex** fuerza el uso de el algoritmo O(*n*log*n*) seleccionado.

**--adaptive** fuerza el uso del algoritmo adaptativo basado en desorden seleccionado. Este será el comportamiento por defecto si no se indica un selector

También con un **modo benchmarck** (`--bench`):

Que muestra métricas detalladas.

Índice de **Desorden**:

El proyecto calcula inicialmente un coeficiente entre `0` y `1` mediante una función. A partir de este índice, se bifurca en tres implementaciones:
Desorden bajo (<0.2)
Desorden medio (0.2 a 0.5)
Desorden alto (>=0.5)

## Explicación y justificación del algoritmo

La arquitectura adaptativa del programa se diseñó bajo un principio estricto: No existe un algoritmo único ideal para todos los escenarios de desorden numérico. Cada lógica se seleccionó mediante prueba, error y muchos intentos hasta lograrlo.

* **Selection Sort para Algoritmo simple**: Selection Sort es un algoritmo muy simple que se centra en encontrar el número mínimo actual del stack a, hacer rotates (o reverse rotates, según que sea más conveniente) hasta llegar a ese mínimo y hacer un push b. Esto hace que el stack b sea el stack a ordenado de mayor a menor, de forma que cuando solo quede un elemento en el stack a (el número máximo) solo habra que hacer push a hasta que el stack b esté vacío, de forma que el stack a quede ordenado de menor a mayor.

* **Chunks para Algoritmo intermedio:** Al dividir el Stack A en subconjuntos de tamaño `√n`, limitamos el radio de búsqueda del programa. Cuando buscamos el número más óptimo para mover al Stack B, las rotaciones (ra / rra) requeridas son mínimas porque los elementos candidatos están geográficamente cerca de la superficie del stack. Esto permite batir con holgura el límite de los movimientos exigido.

* **Radix para Algoritmo complejo:** Radix ofrece predictibilidad absoluta y consistencia ciega. Al mapear previamente los números a índices correlativos de `0` a `size - 1`, nos independizamos de la magnitud de los números originales. Evaluar el bit menos significativo en cada pasada garantiza que el programa realice exactamente el mismo número de comprobaciones por elemento, logrando un flujo constante y seguro que estabiliza el conteo de movimientos por debajo de los límites críticos de aprobado en listas grandes.

### Contrubución de cada estudiante:

| Funciones de: | Nombre:       | Descripción:                 |
|---------------|---------------|------------------------------|
| main.c | mostoloz y francysa | Fuimos adaptando juntos a medida que íbamos avanzando la función para ir probando el programa cada uno con su parte, y luego juntos.|
| checks.c, ft_atol, free.c, ft_flags | francysa | El chequeo para validar que sean números, enteros, no sean duplicados, no superen los límites.|
| calculate_disorder.c, create_list.c, validate_imput.c | moztoloz | Ver el índice de desorden, crear la lista doblemente enlazada con el stack y validar.|
| simple_sort.c, Makefile | mostoloz | Algoritmo simple y Makefile junto con la libft y el ft_printf. |
| medium_sort.c, chuncks.c, aux_medium.c, complex_sort | francysa | Algoritmo intermedio y complejo. |
| sort_five.c, sort_three.c | mostoloz | Casos específicos con desorden de números. |
| nodos.c, t_index.c | francysa | Ajuste de algunas funciones de Libft para nuestras listas e Indexacion. |
| push_swap.h | mostoloz y francysa | Hemos ido construyendo juntos el header a medida que vamos avanzando. |
| swap.c, rotate.c | mostoloz | Movimientos en las pilas. |
| revers.c., push.c | francysa | Movimientos en las pilas. |
| aux_bench.c | mostoloz | Funciones auxiliares para el bench (imprimirlo, guardar la estrategia...) |


## Instrucciones
El proyecto incluye un `Makefile` que compila la parte obligatoria, clona el repositorio y ejecuta:

`make` o `make all`: Compila los archivos base y genera el programa push_swap.

### Ejecución
El programa recibe una lista de números enteros como argumentos independientes o agrupados en un solo string. Por ejemplo ejecuta:

`./push_swap 1254 856 254 369 578`

**SELECTOR DE ESTRATEGIA**

Puedes utilizar flags para forzar el uso de una lógica concreta. Por ejemplo ejecuta:

`./push_swap --simple 4 67 3 87 23`

**MODO BENCH**

Para ver el índice de desorden, la estrategia que se ha utilizado, el total de movimientos y cuantos de cada uno ha utilizado. Por ejemplo ejecuta:

`./push_swap --bench 4 67 3 87 23`

### Comandos Útiles:

`make clean`: Elimina los archivos objeto (.o).

`make fclean`: Elimina los objetos y los binarios ejecutables finales. 

`make re`: Limpia y vuelve a compilar todo.

Puedes validar la ausencia de fugas de memoria utilizando:
`valgrind --leak-check=full --track-origins=yes ./push_swap 5 3 4 1 2`

## Uso de IA

* **Comprensión Teórica:** Explicación y desglose de algoritmos de ordenación complejos (como el *Turk Algorithm* y *Radix*).
* **Análisis de Complejidad:** Discusión teórica sobre la complejidad temporal $O(N^2)$ vs $O(N \log N)$ y cómo reducir el número de instrucciones.
* **Estrategias de Depuración (Debugging):** Ayuda para conceptualizar casos límite (listas ya ordenadas, valores duplicados, `INT_MAX`/`INT_MIN`).
* **Optimización Lógica:** Lluvia de ideas sobre cómo calcular de forma eficiente el coste de movimiento de un nodo (calcular la combinación más barata de rotaciones `ra`, `rb`, `rr`, `rrr`).

> **Nota:** La IA se utilizó estrictamente como un **tutor dinámico** para acelerar el proceso de aprendizaje y diseño algorítmico, asegurando que la implementación final sea 100% propia y comprendida en su totalidad.

## Recursos
Para el diseño, la optimización y el blindaje del proyecto, se utilizaron los siguientes recursos y herramientas de la comunidad:

### Visualizadores de Stacks: 
Hemos utilizado diferentes páginas para visualizar tanto cómo funciona nuestro código, cómo para ver como podriamos plantearlo:
* [Push Swap Game](https://servandobarreiro.github.io/push_swap_game/): Este juego nos ha servido para entender como podemos ordenar un stack con los movimientos limitados a nuestra disposición.

* [Push Swap Visualizer](https://codepen.io/ahkoh/full/bGWxmVz): Esta página nos ha ayudado a ver de forma visual cómo trabaja nuestro código con el stack de números y confirmar que realmente cumple su función.

### Algoritmos de Orden: 
Al buscar información sobre diferentes algoritmos de ordenación hemos encontrado estas páginas que nos han ayudado mucho a la hora de elegir un planteamiento:
* [Sort Visualizer](https://sortvisualizer.com/): Esta página nos ha ayudado mucho para ver de forma visual cómo trabajan distintos algoritmos de ordenación.

* [Sorting Visualizer](https://visualgo.net/en/sorting): Esta página es similar a la anterior, pero esta trabaja más lentamente lo que nos ha ayudado a interiorizar lo que hace cada algoritmo.

### Herramientas de Diagnóstico de Bajo Nivel:
*	Valgrind (Memcheck): Herramienta principal para interceptar saltos condicionales erróneos provocados por la lectura de memoria basura en el parsing y corregir las fugas en la estructura t_bench y listas enlazadas.
