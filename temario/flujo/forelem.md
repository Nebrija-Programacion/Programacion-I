# Recorriendo un objeto iterable elemento a elemento

Los objetos iterables a los que se prestará atención aquí son:

 * std::string
 * std::array
 * std::vector

Estos tipos de datos se caracterizán porque están formados por una serie de elmentos ordenados.

Hay varias formas de recorrer un objeto iterable elemento a elemento, aquí explicaremos el bucle `for(elem: variable)` introducido en C++ moderno.

A continuación se va a mostrar cómo se hace para un `std::array`, pero se haría de modo idéntico para cualquiera de los otros objetos iterambles.

La estructura general del bucle `for(elem: variable)` es:

```cpp

std::array<type, size> arr;
for(type element: arr){
  // que hago con cada elemento
}
```
Lo que hay entre llaves del bucle `for` se ejecutará una vez por cada elemento del array, y la variable creada dentro del bucle `element` tendrá asociado el elemento del *array*.

Por ejemplo, en el siguiente programa:

```cpp
#include <iostream>
#include <array>

int main() {
    std::array<int, 10> arr{1,2,3,4,5,6,7,8,9,10};
    for(int elem: arr){
        std::cout << elem << "-";
    }
    return 0;
}
```

 1. Se crea una variable/etiqueta arr que se asociará con un array de 10 números enteros;
 2. Se inicializa el array con los valores {1,2,3,4,5,6,7,8,9,10}.
 3. Se recorre el array elemento a elemento.
    1. La variable `elem`, de tipo `int` se asociará en cada iteración del bucle con el elemento correspondiente del array.
    2. Se muestra por pantalla el valor de elem.
 4. Finaliza el programa.

Por lo tanto este programa imprimirá por pantalla: 
```
1-2-3-4-5-6-7-8-9-10-
```

En este ejemplo es muy importante entender la diferencia entre variable/etiqueta y valor. ¿Qué pasa en el siguiente programa?

```cpp
#include <iostream>
#include <array>

int main() {
  std::array<int, 10> arr{1,2,3,4,5,6,7,8,9,10};
  for(int elem: arr){
    std::cout << elem << "-";
    elem = 2*elem;
  }
}
```

Se podría pensar que en cada iteración, modificamos el elemento del array haciendo que su valor sea el doble, es decir, que el array antes del bucle for sería: `{1,2,3,4,5,6,7,8,9,10}` y después del bucle for sería `{2,4,6,8,10,12,14,16,18,20}`. **ESTO ES FALSO**.

¿Qué pasa realmente en este programa?

1. Se crea una variable/etiqueta arr que se asociará con un array de 10 números enteros;
 2. Se inicializa el array con los valores {1,2,3,4,5,6,7,8,9,10}.
 3. Se recorre el array elemento a elemento.
    1. La variable `elem`, de tipo `int` se asociará en cada iteración del bucle con el elemento correspondiente del array.
    2. La varaible `elem`, se asocia a un **nuevo dato** (en memoria) cuyo valor es el doble de `elem` (por lo tanto el array no se modifica).
 4. Finaliza el programa.


Con el objetivo de mostrar la generalidad de este bucle, he aquí un ejemplo para variables de tipo `std::string`

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name{"alberto"};
    for(char elem: name){
        std::cout << elem << "-";
    }
    return 0;
}
```
Este programa muestra por pantalla `a-l-b-e-r-t-o-`