# Primeros pasos en C++

Vamos a ver el código equivalente a un programa en pseudocódigo escrito en C++

Partimos del siguiente programa en pseudocódigo, que muestra los 10 primeros números de la serie de fibonacci

```
1   N_A = 1
2   N_AA = 1
3   CONT = 2
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

``` cpp {.line-numbers}
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