# Funciones Lambda  

Las funciones son una incorporación al C++ moderno que facilitan la *programación funcional*. Según [WikiPedia](https://es.wikipedia.org/wiki/Programaci%C3%B3n_funcional) *En informática, la programación funcional es un paradigma de programación declarativa basado en el uso de funciones matemáticas, en contraste con la programación imperativa, que enfatiza los cambios de estado mediante la mutación de variables.1 La programación funcional tiene sus raíces en el cálculo lambda, un sistema formal desarrollado en los años 1930 para investigar la definición de función, la aplicación de las funciones y la recursión. Muchos lenguajes de programación funcionales pueden ser vistos como elaboraciones del cálculo lambda.*

No importa mucho esta definición en este nivel, sin embargo veremos aplicicones muy potentes de la programación funcional gracias a las *funciones lambda*

Una *función lambda* es una variable (estrictamente hablando). Es decir, asociamos a una variable/etiqueta una función, y por lo tanto, podemos tratar la función como a cualquier otra variable.

Es decir, podemos:
  * Pasar una función lambda como parámetros de otras funciones.
  * Devolver una función lambda desde una función.

¿Cómo se declara y define una función lambda? Igual que cualquier otra varible: `tipo nombre = valor`.
Veamos un ejemplo:

```cpp

#include <iostream>
#include <functional>

std::function<int (int, int)> suma = [] (int a, int b) {
  return a + b;
};

int main() {
  std::cout << suma(3,4) << std::endl;
}
```

Vamos a analizarlo por partes:

  * `std::function<int (int, int)>` es el **tipo** de la variable:
    * `<int ...> quiere decir que devuelve un entero
    * `< ... (int, int)>` quiere decir que recibirá dos enteros como parámetros
  * `[]` quiere decir que no puede acceder a ninguna variable fuera de su ámbito. Ya veremos otros casos en los que si es posible.
  * `(int a, int b)` son los parámetros.
  * `{ return a + b };` el cuerpo de la función. Hay que prestar atención a que finaliza en `;`.


Es decir, el modo genérico de declarar una función lambda sería:

```cpp
std::function< tipo_de_retorno (tipo_param_1, tipo_param2, etc)> 
    nombre_funcion [](tipo1 nombre_1, tipo2 nombre2, ...) 
    { 
      // cuerpo_funcion 
    };
```

Es importante entender, que a nivel de funcionalidad, las funciones `suma1` y `suma2` son idénticas

```cpp
std::function<int (int, int)> suma1 = [] (int a, int b) {
  return a + b;
};

int suma2(int a, int b){
  return a+b;
}
```
Entonces, ¿por qué las funciones lambda?

## Composición de funciones

La composición de funciones es muy habitual en matemáticas, por ejemplo, supongamos:

```
f(x) = 2x + 1;
g(x) = (x+1)²

f(g(x)) = 2(x+1)² + 1
``` 

El mismo principio se aplica a las funciones lambda. Vamos a poner un ejemplo, que si bien es poco útil, muestra esto:

```cpp
#include <iostream>
#include <functional>

std::function<int (int, int)> suma = [] (int a, int b) {
  return a + b;
};

std::function<int (int, int) > resta = [] (int a, int b) {
  return a - b;
};

int operacion(int a, int b, std::function<int (int, int)> const & op){
  return op(a,b);
}

int main() {
  std::cout << "Introduce s para sumar 2 y 3 o r para restar 2 y 3: ";
  char c; std::cin >> c;

  if(c == 's') std::cout << operacion(2,3, suma);
  if(c == 'r') std::cout << operacion(2,3, resta);
}
```

Vamos a analizarlo en detalle:

```cpp
std::function<int (int, int)> suma = [] (int a, int b) {
  return a + b;
};

std::function<int (int, int) > resta = [] (int a, int b) {
  return a - b;
};
```

Declaramos 2 funciones lambda, `suma` y `resta`, ambas devuelven un entero y toman como parámetros 2 enteros.

```cpp
int operacion(int a, int b, std::function<int (int, int)> const & op){
  return op(a,b);
}
```
Declaramos una función (esta no es lambda, aunque también podría haberlo sido) `operacion`. Lo interesante de esta función es que uno de los parámetros que recibe es una función lambda.
  * Devuelve un `int`
  * Recibe 3 parámetros:
    * `a`, que es un número entero.
    * `b`, que es un número entero.
    * `op`, que es una función lambda que devuelve un `int` y recibe 2 `int` como parámetros.

Esta función `operacion` aplicará la función `op` sobre `a` y `b` y devolverá el resultado de `op`: `return op(a,b);`

La magia sucede en la función `main`

```cpp
int main() {
  std::cout << "Introduce s para sumar 2 y 3 o r para restar 2 y 3: ";
  char c; std::cin >> c;

  if(c == 's') std::cout << operacion(2,3, suma);
  if(c == 'r') std::cout << operacion(2,3, resta);
}
```

¿Qué está pasando?
 1. Se pide al usuario que introduzca 's' para sumar 2 y 3 y 'r' para restarlos.
 2. Si el usuario introduce 's' se ejecuta `operacion(2,3, suma)`, se decir, al llamar a `op(2,3)` llamaremos a `suma(2,3)`, que ya el parámetro `op` es `suma` (por referencia constante, pero funcionaría también si fuera por copia).
 3. Si el usuario introduce 'r' se ejecuta `operacion(2,3, resta)`, se decir, al llamar a `op(2,3)` llamaremos a `resta(2,3)`, que ya el parámetro `op` es `resta` (por referencia constante, pero funcionaría también si fuera por copia).

Este modo de trabajar permite que **todo sean variables** y que por lo tanto todo pueda ser tratado como variables.

Se recomienda ver los siguientes ejemplos para entender las posiblidades de las funciones lambda y la composición de funciones:

## Ejemplos Composición de funciones
  * [Aplicar una transformación a un std::array](https://github.com/Nebrija-Programacion/Programacion-I/tree/master/ejemplos/funciones/composicion/transform)
  * [Filtrar un std::vector](https://github.com/Nebrija-Programacion/Programacion-I/tree/master/ejemplos/funciones/composicion/filter)
* Composición con functiones Lambda
  * [Declarar la función directamente en el parámetro de la función de primer orden](https://github.com/Nebrija-Programacion/Programacion-I/tree/master/ejemplos/funciones/lambda/inline)
  * [Devolver si un vector tiene un elemento que cumpla una condición](https://github.com/Nebrija-Programacion/Programacion-I/tree/master/ejemplos/funciones/lambda/contains)
  * [Pasando el contexto a una función lambda * forEach](https://github.com/Nebrija-Programacion/Programacion-I/tree/master/ejemplos/funciones/lambda/foreach)