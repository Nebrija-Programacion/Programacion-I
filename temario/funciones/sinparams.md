# Funciones sin parámetros

Las funciones sin parámetros son el tipo más básico de funciones. Las funciones pueden devolver o no devolver ningún valor. Por ejemplo, podríamos utilizar una función para pedir al usuario una lista de palabras y devolver aquellas que empiezan por `a`. En ese caso, la función devolvería un `std::vector<string>`. También podriamos declarar una función que no devuelve ningún valor, por ejemplo, una función que pide al usuario su nombre y muestra por pantalla `Hola {nombre}`. Está función no devuelve ningún valor. 

La estructura general de una función sin parámetros es:

```cpp
type functionName(){
  // function code
}
```
Donde: 
  - `type` el tipo del valor que devuelve la función.
  - `functionName` el nombre / etiqueta de la función.

Veamos los dos ejemplos anteriores:

## Función con valor de retorno
```cpp
#include <iostream>
#include <vector>

std::vector<std::string> aWords(){
  std::vector<std::string> result;
  std::string word{""};
  
  while(word != "fin"){
    std::cout << "Introduce una palabra of 'fin' para acabar: ";
    std::cin >> word;
    if(word.size() > 0 && word.at(0) == 'a') result.push_back(word);
  }

  return result;
}

int main() {
  std::vector<std::string> words = aWords();
  for(auto elem: words){
    std::cout << elem << "\n";
  }
}
```

Veamos en primer lugar la definición de la función:

`std::vector<std::string> aWords(){ ... }`

  - Tipo de retorno: `std::vector<std::string>`
  - Nombre de la funcióń: `aWords`

Es decir, la función llamada `aWords` devolverá un vector de `string`. Eso quiere decir que cuando la llamemos, el valor que devuelve lo asignaremos a una variable de ese tipo. Lo vemos en el `main`: `std::vector<std::string> words = aWords();`

Creamos una variable llamada `words` de tipo `std::vector<std::string>` y le asignamos el valor que devuelve la función `aWords`.

Luego nos centramos en qué hace la función:

```cpp
  std::vector<std::string> result;
  std::string word{""};
  
  while(word != "fin"){
    std::cout << "Introduce una palabra of 'fin' para acabar: ";
    std::cin >> word;
    if(word.size() > 0 && word.at(0) == 'a') result.push_back(word);
  }

  return result;
  ```
  Este código pide al usuario que introduzca palabras, y seguirá pidiendole nuevas palabras hasta que escriba `fin`. Aquellas palabras que empiecen por el caracter `a`serán añadidas al vector `result`. Al finalizar devolverá este vector.

  ## Función sin valor de retorno
  Las funciones también puen no devolver nada, en dicho caso, el tipo del valor de retorno será `void` (es decir, sin retorno). Veamos el ejemplo
```cpp
#include <iostream>

void greet(){
  std::string name;
  std::cout << "Como te llamas? ";
  std::cin >> name;
  std::cout << "Hola " << name << "\n";
}

int main() {
  greet();
  return 0;
}
```
En este caso, la declaración de la función es: `void greet()`

  - Tipo de retorno: `void`, es decir, no devuelve nada.
  - Nombre de la funcióń: `greet`

Posteriormente llamaremos a dicha función dentro de la función principal `main`.

```cpp
int main() {
  greet();
  return 0;
}
```

## Trabajando correctamente con funciones

Las funciones permiten hacer algunas cosas que sin embargo no son recomendables. Dos reglas de oro que se deberían seguir a rajatabla son:
  * Una función nunca debería acceder a variables que esté fuera de su ámbito.
  * Una función nunca debería modificar una variable que esté fuera de su ámbito.

### Ambito de las funciones
El ámbito de una función está formado, explicado de un modo _vulgar_, por las variables e instrucciones que se declaran o ejecutan dentro de la propia función. Es decir, todo lo que está entre llaves.

El siguiente ejemplo:

```cpp
#include <iostream>

std::string nombre;

void saludar(){
  std::cout << "Hola " << nombre << "\n";
}

int main() {
  std::cout << "Introduce tu nombre:\n";
  std::cin >> nombre;
  saludar();
  return 0;
}
``` 
compila y ejecuta correctamente, sin embargo se está saltando la regla del ámbito, ¿por qué? la variable `nombre` no pertenece al ámbito de la función `saludar` (porque está declarada fuera de la función) por lo que **jamás debería acceder a ella**. ¿Cuál sería un modo correcto de hacer este programa?

```cpp
#include <iostream>

void saludar(){
  std::string nombre;
  std::cout << "Introduce tu nombre:\n";
  std::cin >> nombre;
  std::cout << "Hola " << nombre << "\n";
}

int main() {  
  saludar();
  return 0;
}
```
En este último programa, la función `saludar` sólo utiliza variables declaradas dentro de su ámbigo (llamadas _variables locales_).


### Efectos colaterales de las funciones
Un efecto colateral es cuando una función modifica variables de un programa que no pertenecen a la función, es decir, que _no son de su ámbito_ (ya sea de modo intencionado o accidental).

Por ejemplo, el siguiente programa:

```cpp
#include <iostream>

int numero;

void multiplicaPorDos(){
  numero =  numero * 2;
}

int main() {  
  std::cout << "Introduce un numero: ";
  std::cin >> numero;
  multiplicaPorDos();
  std::cout << "El número multiplicado por 2 es " << numero << "\n";
  return 0;
}
```
Compila y funciona correctamente, sin embargo **nunca se debería programar así** ya que la función `multiplicaPorDos()` modifica una variable que no pertenece a su ámbito: `numero`.

Pero entonces, ¿cómo puede una función acceder a variables del programa para poder trabajar con ellas?, a través de los [parámetros](./conparams.md).

