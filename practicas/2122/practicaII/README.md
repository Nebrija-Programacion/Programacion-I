# Práctica II

**(Se debe entregar un único archivo, llamado `main.cpp` conteniendo todo el programa. Si el programa no compila, no será evaluado)**

Se desea realizar un programa que analice unas serie de datos numéricos no homogéneos (tamaños variables).

Los datos consisten en varias series. El número de series es variable. Además cada serie tiene un número de datos también variable.

Por ejemplo: podríamos tener 3 series, la primera con 5 números, la seguna con 3 y la tercer con 8 (en total habría 5 + 3 + 8 números).

Se pide hacer un único programa que haga lo siguiente:

 ### Parte 1 (3 puntos)
 Generar una estructura de datos de esas características. 
  * El número de series deberá ser un número aleatorio entre 2 y 5 (mínimo 2 y máximo 5). 
  * Cada una de las series tendrá un número aleatorio de números entre 2 y 6 (mínimo 2 y máxio 6). 
  * Los números serán enteros y tendrán un valor aleatorio entre 0 y 10.

Mostrar por pantalla los valores del siguiente modo (por ejemplo, 3 series y 2, 4 y 5 números). **-debe mostrarse exatemente así-**
`{ { 1 2 } { 2 5 3 7 } { 2 5 3 7 4} }`

En el ejemplola primera serie sería el 1 y el 2, la segunda el 2, 5, 3 y 7, la tercera el 2, 5, 3, 7, 4.

### Parte 2 (3 puntos)
  * Generar una estructura de datos apropiada que almacene los máximos de cada una de las series. En el ejemplo anterior estos valores serían `{2 7 7}` 
  * Mostrar los valores por pantalla del siguiente modo `{2 7 7}`
 
 ### Parte 3 (3 puntos)
 
 * Mostrar por pantalla todos los valores que hay, ordenados de menor a mayor y sin que se repitan. En el ejemplo serían `{1 2 3 4 5 7}`.
 * Mostrar por pantalla la media de estos números mostrados.