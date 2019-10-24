# std::set

En esta sección estudiaremos los *conjuntos*. Los *conjuntos* son una serie ordenada (de menor a mayor) de datos únicos (no se repiten) de un tipo determinado. Al declarar un *set* necesitamos indicar el tipo de datos que almacenará, pero no necesitamos indicar su tamaño (cuántos datos tendrá asociados). El *set* por lo tanto tendrá un tamaño 0 cuando lo declaremos e irá modificando su tamaño según añadamos o eliminemos elementos del mismo.


## Declaración de un std::set
La declaración de un `std::set` tiene la siguiente estructura

```cpp
#include <set>

std::set<tipo> nombre;
```
Recordemos que esto responde al modo genérico de declarar una variable `TIPO nombre;` sabiendo que el valor inicial es opcional (salvo que la variable sea constante `const`).

Al declarar un *set*, si éste no es inicializado tendrá un tamaño 0.

## Inicialización de un std::set

Un `std::set` no inicializado tendrá tamaño 0, es decir, el siguiente código

```cpp
#include <set>
#include <string>

std::set<std::string> mySet;
```

Creará un conjunto vacío de cadenas de texto.


En caso de que queramos inicializar un `std::set` indicaremos sus valores entre llaves y separados por comas.

```cpp
#include <set>
#include <string>

std::set<std::string> mySet{"Pedro", "Luis", "Maria", "Laura"};
```

También se puede inicializar con el operaodr `=` (aunque se recomienda hacerlo como indicado arriba).

```cpp
#include <set>
#include <string>

std::set<std::string> mySet = {"Pedro", "Luis", "Maria", "Laura"};
```

Es importante destacar, que el orden de los elementos en un `std::set` no tienen por qué coincidir con el orden en el que fueron incializados, ya que internamente éstos se ordenarán de menor mayor.

Es decir, este código
 ```
std::set<int> mySet{2,3,1,4};
```
Dará lugar a un conjunto con un orden interno `{1,2,3,4}`

## Lectura y asignación de los elementos de un std::vector

Los elementos de un `set` **NO** son accesibles a través de su índice (posición). Por lo tanto el siguiente código **es incorrecto**


```cpp
#include <set>
#include <iostream>

int main(){
  std::set<int> mySet = {1,4,5,3,6};

  // ERROR en acceso al valor asociado
  std::cout << mySet.at(3); // ERROR DE COMPILACION
  std::cout << mySet[3]; // ERROR DE COMPILACION

  return 0;
}

```

## Añadir valores a un std::set
¿Cómo añadimos entonces valores a un conjunto `std::set`? A través de la función insert, del siguiente modo:

```cpp

#include <set>
#include <string>

int main(){
  std::set<std::string> names;
  names.insert("Luis");   // {"Luis"}
  names.insert("Pedro");  // {"Luis", "Pedro"} 
  names.insert("Maria");  // {"Luis", "Maria, "Pedro"} --> OJO AL CAMBIO DE ORDEN

  return 0;
}
``` 

Es importante destacar que aunque los datos de un `std::set` están internamente ordenados, este orden no el orden de inserción (como por ejemplo en un `std::vector`). El orden de los datos de un set es siempre de mayor a menor, siguiendo el criterio del operador `<` definido para el tipo específico.

¿En qué orden se mostraría por pantalla el siguiente `std::set`?

```cpp
#include <iostream>
#include <set>

int main(){
  std::set<int> numbers;
  numbers.insert(10);   
  numbers.insert(2);  
  numbers.insert(5); 
  for(auto elem: numbers){
    std::cout << elem;
  }

  return 0;
}
```

Asímismo, un `std::set` no admite datos repetidos, por lo que si insertamos un dato repetido, simplemente lo ignora

```cpp
#include <iostream>
#include <set>

int main(){
  std::set<int> numbers;
  numbers.insert(10);   
  numbers.insert(2);  
  numbers.insert(5); 
  numbers.insert(2); // El 2 ya esta introducido, asi que ignora esta instruccion
  for(auto elem: numbers){
    std::cout << elem << ", " ; // 2, 5, 10,
  } // 2, 5, 10,

  return 0;
}
```


## Funciones del tipo std::set

### clear
Elimina todos los elementos de un `std::set`

```cpp
#include <set>

int main(){
  std::set<int> numbers;
  numbers.insert(10); // {10}   
  numbers.insert(2);  // {2, 10}  
  numbers.insert(5);  // {2, 5, 10}
  numbers.clear();    // {}

  return 0;
}
```

### empty
Indica si un `std::set` contiene datos o no (`true` o `false)

```cpp
#include <set>
#include <iostream>

int main(){
  std::set<int> numbers;
  numbers.insert(10); // {10}   
  numbers.insert(2);  // {2, 10}  
  numbers.insert(5);  // {2, 5, 10}
  
  if(numbers.empty()){
    std::cout << "Vacio\n";
  }else{
    std::cout << "Lleno\n";
  } // -> Lleno
  
  numbers.clear();    // {}

  if(numbers.empty()){
    std::cout << "Vacio\n";
  }else{
    std::cout << "Lleno\n";
  } // -> Vacio

  return 0;
}
```

### size
Devuelve el número de elementos del conjunto
```cpp
#include <set>
#include <iostream>

int main(){
  std::set<int> set1 = {1,4,5,3,6};
  std::set<int> set2;
  std::cout << set1.size() << "\n"; // -> 5
  std::cout << set2.size() << "\n"; // -> 0

  return 0;
}

```

```cpp
#include <set>
#include <iostream>

int main(){
  std::set<int> numbers;
  numbers.insert(10); // {10}   
  numbers.insert(2);  // {2, 10}  
  numbers.insert(5);  // {2, 5, 10}
  
  if(numbers.empty()){
    std::cout << "Vacio\n";
  }else{
    std::cout << "Lleno\n";
  } // -> Lleno
  
  numbers.clear();    // {}

  if(numbers.empty()){
    std::cout << "Vacio\n";
  }else{
    std::cout << "Lleno\n";
  } // -> Vacio

  return 0;
}
```
### find
Esta función sirve para ciertas cosas que no veremos en este momento, pero nos sirve para saber si un conjunto contiene un cierto elemento o no.

La función find devuelve lo que se llama un *iterador* a la posición donde se ha encontrado el elemento buscado. Si dicho iterador apunta al final del conjunto `set.end` quiere decir que el elemento no ha sido encontrado.

Por lo tanto, para saber si un elemento está contenido en un conjunto se utilizaría el siguiente código (no es importante comprenderlo en profundiad ahora, solo saber usarlo)

```cpp
#include <set>
#include <iostream>

int main(){
  std::set<int> numbers;
  numbers.insert(10); // {10}   
  numbers.insert(2);  // {2, 10}  
  numbers.insert(5);  // {2, 5, 10}
  
  if(numbers.find(5) == numbers.end()){
    std::cout << "Elemento no encontrado\n";
  }else{
    std::cout << "Elemento encontrado\n";
  } // -> Elemento encontrado


  if(numbers.find(1) == numbers.end()){
    std::cout << "Elemento no encontrado\n";
  }else{
    std::cout << "Elemento encontrado\n";
  } // -> Elemento no encontrado

  return 0;
}
  ```


### erase
Elimina un datos específico de un `std::set` (si está contenido en el conjunto, en caso contrario no hace nada).

```cpp
#include <set>
#include <iostream>

int main(){
  std::set<int> numbers;
  numbers.insert(10); // {10}   
  numbers.insert(2);  // {2, 10}  
  numbers.insert(5);  // {2, 5, 10}
  numbers.erase(5);   // {2, 10}
  
  return 0;
}
``` 
o si no está

```cpp
#include <set>
#include <iostream>

int main(){
  std::set<int> numbers;
  numbers.insert(10); // {10}   
  numbers.insert(2);  // {2, 10}  
  numbers.insert(5);  // {2, 5, 10}
  numbers.erase(1);   // {2, 5, 10}
  
  return 0;
}
```
Podemos saber si el elmento ha sido borrado o no a través de un condicional

```cpp
#include <set>
#include <iostream>

int main(){
  std::set<int> numbers;
  numbers.insert(10); // {10}   
  numbers.insert(2);  // {2, 10}  
  numbers.insert(5);  // {2, 5, 10}
  
  if(numbers.erase(5)){
    std::cout << "Borrado\n";
  }else{
    std::cout << "Elemento no encontrado\n";
  } // -> Borrado


  if(numbers.erase(1)){
    std::cout << "Borrado\n";
  }else{
    std::cout << "Elemento no encontrado\n";
  } // -> Elemento no encontrado

  ```


Al igual que los `std::string`, `std::array` y `std::vector` el `std::set` puede ser recorrido por un bucle [`for(auto elem :set)`](../flujo/forelem.md).

## Para completar
  * [Referencia del tipo std::set](http://www.cplusplus.com/reference/set/set/)
