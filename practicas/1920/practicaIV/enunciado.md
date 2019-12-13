# Práctica IV

En esta práctica se ejercitará la programación con funciones lambda de una lista enlazada doble (cada elemento está enlazado con el siguiente)

## Ejercicio 1 (2.5 puntos)

Realizar una structura que albergue los datos de una factura: fecha (formato "dd/mm/aaaa") y cantidad (número decimal).

Realizar una función tradicional push que permita añadir facturas a una lista enlaza doble.

## Ejercicio 2 (2.5 puntos)
1. Realizar una función `forEach` que reciba como parámetros:
 * el puntero al primer elemento de la lista enlazada doble.
 * una función lambda que realice alguna operación sobre cada uno de los elementos de la lista.

2. Realizar una función lambda `print` que recibe como pasámetro un puntero a una factura y muestra por pantalla sus datos.

La llamada a `forEach(primeraFactura, print)` debe mostrar por pantalla la información de todas las facturas.

## Ejercicio 3 (2.5 puntos)

1. Realizar una función `filter` que reciba como parámetros:
 * el primer elemento de la lista enlazada doble
 * una función lambda que realice una comprobación (devolviendo verdadero o falso) sobre cada uno de los elementos de la lista.

2. Realizar una función lambda `isGreaterThan1000` que dice si la factura es por más de 1000€.

La llamada a `filter(miVector, isGreaterThan1000)` debe devolver otra lista enlazada doble con las facturas mayores de 1000€.

3. Mostrar por pantalla el resultado usando `forEach(listaFiltrada, print)`

## Ejercicio 4 (2.5 puntos)

1. Utilizar la función `filter` anterior y utilizarla para devolver una nueva lista enlazada doble con las facturas menores de 500€. Para ello, el segundo parámetro (la función lambda) se debe definir "en línea", es decir, en el propio parámetro.

2. Mostrar por pantalla el resultado usando `forEach(listaFiltrada, print)`

