# std::vector

En esta sección estudiaremos los *vectores*. Los *vectores* son una serie ordenada de datos de un tipo determinado. Al declarar un *vector* necesitamos indicar el tipo de datos que almacenará, pero no necesitamos indicar su tamaño (cuántos datos tendrá asociados). El *vector* por lo tanto tendrá un tamaño 0 cuando lo declaremos e irá modificando su tamaño según añadamos o eliminemos elementos del mismo.

Hay distintos modos de trabajar con *vectores* en C++. Aquí trabajaremos con el tipo `std::vector` de la bibliteca estándar de C++ dado que es el tipo recomendado en C++ moderno.

## Declaración de un std::vector
La declaración de un `std::vector` tiene la siguiente estructura

```cpp
#include <vector>

std::vector<tipo> nombre;
```
Recordemos que esto responde al modo genérico de declarar una variable `TIPO nombre{valor};` sabiendo que el valor inicial es opcional (salvo que la variable sea constante `const`).

Al declarar un *vector*, si éste no es inicializado tendrá un tamaño 0.

## Inicialización de un std::vector

Un `std::vector` no inicializado tendrá tamaño 0, es decir, el siguiente código

```cpp
#include <vector>

std::vector<float> vec;
```

Creará un vector de números decimales vacío.


En caso de que queramos inicializar un `std::vector` indicaremos sus valores entre llaves y separados por comas.

```cpp
#include <vector>

std::vector<int> vec{1,4,5,3,6};
```

También se puede inicializar con el operaodr `=`

```cpp
#include <vector>

std::vector<int> vec = {1,4,5,3,6};
```

## Lectura y asignación de los elementos de un std::vector

Los elementos de un *vector* son accesibles a través de su índice (posición). La cuenta de la posición empieza en 0, de modo que el primer elemento tendrá el índice 0 y el último el índice *(tamaño - 1)*.
La lectura y escritura de los elementos de un *vector* se puede realizar de dos modos.

### Función at

```cpp
#include <vector>
#include <iostream>

int main(){
  std::vector<int> vec = {1,4,5,3,6};
  // acceso al valor asociado
  std::cout << vec.at(3) << "\n; // -> 5

  // modificacion del valor asociado
  vec.at(3) = 10;
  std::cout << vec.at(3) << "\n; // -> 10

  return 0;
}

```

### Operador []

```cpp
#include <vector>
#include <iostream>

int main(){
  std::vector<int> vec = {1,4,5,3,6};
  // acceso al valor asociado
  std::cout << vec[3] << "\n"; // -> 5

  // modificacion del valor asociado
  vec[3] = 10;
  std::cout << vec[3] << "\n"; // -> 10

  return 0;
}

```

## Funciones del tipo std::vector

### front y back
Accede al primer y último elemento de un vector.

```cpp
#include <vector>
#include <iostream>

int main(){
  std::vector<int> vec = {1,4,5,3,6};
  // acceso al valor asociado
  std::cout << vec.front() << "\n"; // -> 1

  // modificacion del valor asociado
  vec.back() = 10;
  std::cout << vec.back() << "\n"; // -> 10

  return 0;
}

```

### size
Devuelve el número de elementos del vector
```cpp
#include <vector>
#include <iostream>

int main(){
  std::vector<int> vec1 = {1,4,5,3,6};
  std::vector<int> vec2;
  std::cout << vec1.size() << "\n"; // -> 5
  std::cout << vec2.size() << "\n"; // -> 0

  return 0;
}

```

### clear
Elimina todos los elementos de un vector, dejando su tamaño a 0

```cpp
#include <vector>
#include <iostream>

int main(){
  std::vector<int> vec = {1,4,5,3,6};
  std::cout << vec.size() << "\n"; // -> 5
  vec.clear();
  std::cout << vec.size() << "\n"; // -> 0

  return 0;
}

```

### push_back
Añade un elemento al final del vector

```cpp
#include <vector>
#include <iostream>

int main(){
  std::vector<int> vec = {1,4,5,3,6};
  std::cout << vec.size() << "\n"; // -> 5
  vec.push_back(10);
  std::cout << vec.size() << "\n"; // -> 6
  std::cout << vec.back() << "\n"; // -> 10

  return 0;
}

```
### pop_back
Elimina el último elemento del vector

```cpp
#include <vector>
#include <iostream>

int main(){
  std::vector<int> vec = {1,4,5,3,6};
  std::cout << vec.size() << "\n"; // -> 5
  vec.pop_back();
  std::cout << vec.size() << "\n"; // -> 4
  std::cout << vec.back() << "\n"; // -> 3

  return 0;
}

```

Al igual que los `std::string`, `std::array` y `std::set` el `std::vector` puede ser recorrido por un bucle [`for(auto elem :vector)`](../flujo/forelem.md).

## Para completar
  * [Referencia del tipo string](http://www.cplusplus.com/reference/vector/vector/)
