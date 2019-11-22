# Práctica III

En esta práctica se ejercitará la programación con funciones tradicionales y funciones lambda. Todos los ejercicios se ejecutarán sobre el siguiente vector `{1,3,4,13,4,6,12,7,18}`

## Ejercicio 1 (2 puntos)

### Parte 1
Realizar una función tradicional que muestre por pantalla todos los elementos del vector.

### Parte 2
1. Realizar una función `forEach` que reciba como parámetros:
 * el vector
 * una función lambda que realice alguna operación sobre cada uno de los elementos del vector.

2. Realizar una función lambda `print` que muestra por pantalla el parámetro que se le pasa.

`print(5) --> muestra por pantalla 5`

La llamada a `forEach(miVector, print)` debe mostrar por pantalla el vector.

## Ejercicio 2 (2 puntos)

### Parte 1
Realizar una función tradicional que reciba el vector de elementos y devuelva un vector sólo con los pares. Mostrar el resultado por pantalla.

### Parte 2
1. Realizar una función `filter` que reciba como parámetros:
 * el vector
 * una función lambda que realice una comprobación (devolviendo verdadero o falso) sobre cada uno de los elementos del vector.

2. Realizar una función lambda `isEven` que dice si un número entero es par.

`isEven(5) --> false`

La llamada a `filter(miVector, isEven)` debe devolver un vector con los números pares.

3. Mostrar por pantalla el resultado usando `forEach(vectorFiltrado, print)`

## Ejercicio 3 (2 puntos)

### Parte 1
Realizar una función tradicional que reciba el vector de elementos y devuelva un vector sólo con los elementos mayores que 10. Mostrar el resultado por pantalla.

### Parte 2
1. Utilizar la función `filter` anterior y utilizarla para devolver un vector con los valores mayores que 10. Para ello, el segundo parámetro se debe definir "en línea", es decir, en el propio parámetro.

2. Mostrar por pantalla el resultado usando `forEach(vectorFiltrado, print)`

## Ejercicio 4 (4 puntos)

### Parte 1
Realizar una función tradicional que reciba un vector y devuelva otro vector cuyos elementos son el doble.

### Parte 2

1. Realizar una función `map` que reciba como parámetros:
 * el vector
 * una función lambda que realice una transformación (devolviendo otro número) sobre cada uno de los elementos del vector.

2. Realizar una función lambda `double` que devuelve el valor del parámetro multiplicado x 2.

`double(3) --> 6`

La llamada a `map(miVector, double)` debe devolver un vector cuyos elementos son el doble de los elementos de `miVector`.

3. Mostrar por pantalla el resultado usando `forEach(vectorMapeado, print)`
