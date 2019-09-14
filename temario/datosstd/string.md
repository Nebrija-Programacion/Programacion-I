# Tipo std::string

El tipo std::string es una secuencia de caracteres, o dicho de otro modo _una cadena de texto_. Para poder usar el tipo std::string es necesario incluir la biblioteca de C++ `string`

```cpp
#include <string>
std::string name = "Alberto";
``` 
o bien, en C++ moderno,

```cpp
#include <string>
std::string name{"Alberto"};
``` 

Al igual que con cualquier otro tipo de variable, el tipo _string_ puede ser constante, por lo que la asociación entre la variable y su valor no puede ser modificada y debe ser inicializado cuando se declara.

```cpp
#include <string>
std::string name; //correcto
const std::string otherName; //incorrecto, debe inicializarse aqui.
```

El valor al que está asociado una variable _string_ puede modificarse con el operador de igualdad.

```cpp
#include <iostream>
#include <string>

std::string name = "Alberto";

int main(){
    std::cout << name << "\n"; // -> Alberto
    name = "Maria";
    std::cout << name << "\n"; // -> Maria
    return 0;
}
```
