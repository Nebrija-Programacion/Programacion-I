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

