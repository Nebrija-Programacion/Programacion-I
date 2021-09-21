# Primeros pasos en C++

Vamos a ver el código equivalente a un programa en pseudocódigo escrito en C++

### Creando variables, operando con ellas y mostrándolas por pantalla

Partimos del siguiente programa en pseudocódigo, que muestra los 10 primeros números de la serie de fibonacci

```
1   N_A = 1
2   N_AA = 1
3   CONT = 3
4   PRINT(N_AA)
5   PRINT(N_AA)
6   WHILE(CONT <= 10)
7       N = N_AA + N_A
8       N_AA = N_A
9       N_A = N
10      PRINT(N)
11      CONT = CONT + 1
``` 


Este es el código, ahora lo analizaremos

```cpp {.line-numbers}
#include <iostream>

int main(){
  int n_a{1};
  int n_aa{1};
  int cont{3};
  std::cout << n_aa << " - ";
  std::cout << n_a << " - ";
  while(cont <= 10){
    int n = n_a + n_aa;
    n_aa = n_a;
    n_a = n;
    std::cout << n << " - ";
    cont = cont + 1;
  }
}
```

Un programa en C++ lo primero que hace es importar las bibliotecas que va a necesitar. Las bibliotecas serían aquellas herramientas que necesita para realizar la tarea, y que no son parte del lenguaje en sí, por eso deben ser importadas. En este caso, la única biblioteca necesaria es la que permite mostrar texto por pantalla. Es la biblioteca `iostream`.

Posteriormente TODOS los programas en C++ tienen un bloque principal, que es el que se ejecutará: es la función `int main(void){ ... }` 

¿Qué hace este código?

* `int n_a{1};` Crea la variable `n_a`, que albergará números enteros (`int`), y le da el valor `1`. Equivalente a la línea 1 en el pseudocódigo. (en C++ se recomienda que los nombres de variables sean con minúscula).
* `int n_aa{1};` Crea la variable `n_aa`, que albergará números enteros (`int`), y le da el valor `1`. Equivalente a la línea 2 en el pseudocódigo.
* `int cont{3};` Crea la variable `cont`, que albergará números enteros (`int`), y le da el valor `3`. Equivalente a la línea 3 en el pseudocódigo.
* `std::cout << n_aa << " - ";`, muestra por pantalla el valor de la variable `n_aa` seguido de `espacio guión espacio`. Equivalente a la línea 4 del pseudocógido.
* `std::cout << n_a << " - ";`, muestra por pantalla el valor de la variable `n_a` seguido de `espacio guión espacio`. Equivalente a la línea 5 del pseudocógido.
* `while(cont <= 10){ ... }`, lo que hay dentro de las llaves `{` `}` se ejecutará mientras el valor de la variable `cont` sea menor o igual a 10. Equivalente a la línea 5.
* `int n = n_a + n_aa;` Crea la variable `n`, que albergará números enteros, y le da como valor la suma de `n_a` y `n_aa`. Línea 7.
* Las 2 líneas siguientes reasignan los valores de `n_a` y `n_aa`.
* `std::cout << n << " - ";` Muestra por pantalla el valor de `n`.
* `cont = cont + 1;` Incrementa en una unidad el valor de la variable `cont`.


### Creando variables y pidiendo al usuario que escriba su valor

En el ejemplo anterior el programa operaba con valores y los mostraba por pantalla. ¿Cómo pedimos al usuario que introduzca un valor por teclado?

Veamos el siguiente pseudocódigo

```
1   USER_INPUT(N1)
2   USER_INPUT(N2)
3   N = N1 + N2
4   PRINT(N)
``` 

Este algoritmo escrito en C++ sería

```cpp {.line-numbers}
#include <iostream>

int main(){
  int n1;
  int n2;
  std::cout << "Escribe un numero: ";
  std::cin >> n1;
  std::cout << "Escribe otro numero: ";
  std::cin >> n2;
  int n = n1 + n2;
  std::cout << n << "\n";
}
``` 
* `int n1;` se crea una variable `n1` que alojará valores enteros, y no la inicializamos.
* `int n2;` se crea una variable `n2` que alojará valores enteros, y no la inicializamos.
* `std::cout << "Escribe un numero: ";` mostramos por pantalla el texto "Escribe un número: ".
* `std::cin >> n1;` El programa se queda esperando a que el usario escriba un número por teclado y pulse `enter`. Guardará este valor en la variable `n1`
* `std::cout << "Escribe otro numero: ";` mostramos por pantalla el texto "Escribe otro número: ".
* `std::cin >> n2;` El programa se queda esperando a que el usario escriba un número por teclado y pulse `enter`. Guardará este valor en la variable `n2`
* `int n = n1 + n2;` Se crea la variable `n` de tipo entero y se le asigna el valor `n1 + n2`.
* `std::cout << n << "\n";` Se muestra por pantalla el valor de `n` y se realiza un salto de línea ( `\n` );

### Sentencias condicionales

Veamos este programa en pseudocógico

``` 
1   USER_INPUT(N)
2   IF(N ES PAR)
3       PRINT("Es par")
4   IF(N ES IMPAR)
        PRINT("Es impar")
```

Este programa escrito en C++ sería

```cpp
#include <iostream>

int main(){
  int n;
  std::cout << "Escribe un número: ";
  std::cin >> n;
  if(n % 2 == 0){
    std::cout << "Es par \n";
  }

  if(n % 2 == 1){
    std::cout << "Es impar \n";
  }
}
```
 * `if(n % 2 == 0){ ... }` Lo que hay entre llaves cuando el resto de dividir n por 2 (`n%2`) es igual a 0 (`n % 2 == 0`).
 * `if(n % 2 == 1){ ... }` Lo que hay entre llaves cuando el resto de dividir n por 2 (`n%2`) es igual a 1 (`n % 2 == 1`).


## Ejercicios para prácticar

* Escribir en lenguaje C++ los [ejemplos de pseudocódigo](../ejemplos/pseudocodigo.md)
* [Ejercicios 7 - 12](../EJERCICIOS.md)

  