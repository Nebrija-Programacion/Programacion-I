# Bucles - for

Los bucles son instrucciones de control de flujo que permiten que varias sentencias de un programa se ejecuten repetidamente en función en una condición.

En particular, el bucle `for` permite que un conjuntos de instrucciones se repitan un número determinado de veces, en función de un contador que va contando las veces que se ha repetido y una condición de finalización

La sintaxis general del bucle `for` es la siguiente:

```cpp
for(inicializacion contador; condicion finalizacion; incremento/decremento del contador){
  // action 1
  // action 2
}
```

Por ejemplo:

```cpp
#include <iostream>

int main() {
  for(int cont{3}; cont <= 10; cont = cont + 2){
    std::cout << "El contador vale " << cont <<"\n";
  }

  std::cout << "Fin\n";

  return 0;
}
```

Veamos las tres partes en este ejemplo:
  - Inicialización del contador: `int cont{3}`. Declaramos una variable contador de tipo entero y la incialiamos con el valor *3*.
  - Condición de finalización: `cont <= 10`. El bucle for se repetirá mientras `cont` sea menor o igual que *10*.
  - Incremento/decremento contador: `cont = cont + 2`. En cada iteración la variable `cont` se incrementa en 2 unidades.

¿Cuál sería el resultado por tanto?

  1. Iteración 1
     1. cont vale 3
     2. cont <= 10 - `true`
     3. ejecutamos --> *El contador vale 3*
     4. Incrementamos cont en 2 unidades.
  2. Iteración 2
     1. cont vale 5
     2. cont <= 10 - `true`
     3. ejecutamos --> *El contador vale 5*
     4. Incrementamos cont en 2 unidades.
  3. Iteración 3
     1. cont vale 7
     2. cont <= 10 - `true`
     3. ejecutamos --> *El contador vale 7*
     4. Incrementamos cont en 2 unidades.
  4. Iteración 4
     1. cont vale 9
     2. cont <= 10 - `true`
     3. ejecutamos --> *El contador vale 9*
     4. Incrementamos cont en 2 unidades.
  5. Iteración 5
     1. cont vale 11
     2. cont <= 10 - `false`
  6. *FIN*

¿Qué mostrará por pantalla el siguiente programa?

```cpp
#include <iostream>

int main() {
  for(int cont{10}; cont > 1; cont = cont / 2){
    std::cout << "El contador vale " << cont <<"\n";
  }

  std::cout << "Fin\n";

  return 0;
}
```

¿Y qué mostrará por pantalla el siguiente programa?

```cpp
#include <iostream>

int main() {
  for(int cont{0}; cont < 10; cont = cont * 2){
    std::cout << "El contador vale " << cont <<"\n";
    cont++;
  }

  std::cout << "Fin\n";

  return 0;
}
``` 

## Bucle for para recorrer tipos de datos iterables.

Se ha visto que el modo más sencillo de recorrer `std::string`, `std::array`, `std::set`,y `std::vector` es el bucle [`for(auto elem :tipo_iterable)`](forelem.md). Sin embargo, también se pueden recorrer a través de bucles *for* genéricos, y en ocasión éstos dan más juego.

**El tipo `std::set` no se puede recorrer con el *for genérico* debido a que no se puede acceder a sus elementos por índice.**

### Recorriendo un std::array
```cpp
#include <iostream>
#include <array>

int main() {

  std::array<int,5> arr{1,3,4,2,5};

  for(int i{0}; i < arr.size(); i++){
    std::cout << arr.at(i) <<"\n";
  }

  return 0;
}

```

También se podría asignar valores a un `std::array` con un for, por ejemplo, supongamos un array de 100 elementos, con los valores {1,2,3,4,5 ...}

```cpp
#include <iostream>
#include <array>

int main() {

  std::array<int,100> arr;

  for(int i{0}; i < arr.size(); i++){
    arr.at(i) = i;
  }

  return 0;
}
```

### Recorriendo un std::vector
```cpp
#include <iostream>
#include <vector>

int main() {

  std::vecotr<int> vec{1,3,4,2,5};

  for(int i{0}; i < vec.size(); i++){
    std::cout << vec.at(i) <<"\n";
  }

  return 0;
}

```

También se podrían añadir valores a un `std::vector` con un for, por ejemplo, supongamos un vector al que queremos añadir los 100 primeros números pares.

```cpp
#include <iostream>
#include <vector>

int main() {

  std::vector<int> vec;

  for(int i{1}; i <= 100; i++){
    vec.push_back(2*i);
  }

  return 0;
}
```

### Recorriendo un std::string

Imaginemos que queremos sustitur todas las letras `a` de un texto por un `*`.

```cpp
#include <iostream>
#include <string>

int main() {

  std::string palabra{"agasajadas las hadas"};

  for(int i{0}; i < palabra.size(); i++){
    if(palabra.at(i) == 'a') palabra.at(i) = '*';
  }

  std::cout << palabra << "\n"; // *g*s*j*d*s l*s h*d*s

  return 0;
}

```