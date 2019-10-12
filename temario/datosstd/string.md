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

std::string name{"Alberto"};

int main(){
    std::cout << name << "\n"; // -> Alberto
    name = "Maria";
    std::cout << name << "\n"; // -> Maria
    return 0;
}
```

## Funciones del tipo std::string

### size y length

Las funciones _size_ y _length_ devuelven la longitud del string

```cpp
#include <iostream>
#include <string>

std::string name{"Alberto"};

int main(){
    std::cout << name << ": "<< name.size() << "\n"; // -> Alberto: 7
    std::cout << name << ": "<< name.length() << "\n"; // -> Alberto: 7
    return 0;
}
```

### resize

La función _resize_ modificar el tamaño de la cadena de texto asociada a la varaible.

Puede haber dos casos:
* El nuevo tamaño es mayor.
* El nuevo tamaño es menor.

#### Tamaño mayor
Cuando el nuevo tamaño de la cadena de texto es mayor, debemos indicar con qué vamos a rellegar el valor.

Por ejemplo

```cpp
#include <iostream>
#include <string>

std::string name{"Alberto"};

int main(){
    std::cout << name << "\n"; // -> Alberto
    name.resize(10,'s');
    std::cout << name << "\n"; // -> Albertosss
    return 0;
}
```

**Ejercicio**: ¿Cómo sería un programa que añade tres puntos ... al final de cualquier cadena de texto?

#### Tamaño menor
Si el nuevo tamaño del string es menor, la cadena de texto se trunca.

```cpp
#include <iostream>
#include <string>

std::string name{"Alberto"};

int main(){
    std::cout << name << "\n"; // -> Alberto
    name.resize(5);
    std::cout << name << "\n"; // -> Alber
    return 0;
}
```

**Ejercicio**: ¿Cómo sería un programa que elimina el último carácter de cualquier cadena de texto?

### clear

La función clear borra el contenido de una cadena de texto.

```cpp
#include <iostream>
#include <string>

std::string texto{"El perro del hortelano"};

int main(){
    std::cout << texto << "\n"; // -> "El perro del hortelano"
    texto.clear();
    std::cout << texto << "\n"; // -> 
    return 0;
}
```
**Ejercicio** ¿Cuál sería la diferencia entre hacer `texto.clear()` y `texto.resize(0)`?

### empty

Devuelve verdadero (_true_) si la cadena de texto está vacía, o falso (_false_) en caso contrario.

```cpp
#include <iostream>
#include <string>

std::string texto{"El perro del hortelano"};

int main(){
    bool isEmpty = texto.empty();
    std::cout << isEmpty << "\n"; // -> false
    texto.resize(0);
    isEmpty = texto.empty();
    std::cout << isEmpty << "\n"; // -> true
    return 0;
}
```

### at

La función at nos permite acceder al carácter en la posición _n_ de la cadena de texto. **El primer caracter será el 0, y el último en _longitud - 1_

```cpp
#include <iostream>
#include <string>

std::string texto{"El perro del hortelano"};

int main(){
    char c = texto.at(5);
    std::cout << c << "\n"; // -> r
    c = texto.at(0);
    std::cout << c << "\n"; // -> E
    c = texto.at( texto.size() - 1);
    std::cout << c << "\n"; // -> o
    return 0;
}
```

### back y front
Devuelven respectivamente el último y el primer carácter de la cadena de texto.

```cpp
#include <iostream>
#include <string>

std::string texto{"El perro del hortelano"};

int main(){
    char c = texto.back();
    std::cout << c << "\n"; // -> o
    c = texto.front();
    std::cout << c << "\n"; // -> E
    
    return 0;
}
``` 

### append
Añade una cadena de texto al final de la cadena que se está modificando.

```cpp
#include <iostream>
#include <string>

std::string texto{"El perro de san Roque"};

int main(){
    texto.append(" no tiene rabo"); // -> El perro de san Roque no tiene rabo
    std::cout << texto << "\n";
    return 0;
}
```

### push_back

Añade un carácter al final de una cadena de texto

```cpp
#include <iostream>
#include <string>

std::string texto{"1"};

int main(){
    std::cout << texto << "\n"; // -> 1
    texto.push_back('2');
    std::cout << texto << "\n"; // -> 12
    texto.push_back('3');
    std::cout << texto << "\n"; // -> 123
    return 0;
}
``` 

### Operador +
El operador + concatena dos cadenas de texto

```cpp
#include <iostream>
#include <string>

std::string texto{""};
std::string texto1{"El perro de san Roque "};
std::string texto2{"no tiene rabo"};

int main(){
    texto = texto1 + texto2;
    std::cout << texto << "\n"; // -> El perro de san Roque no tiene rabo
    return 0;
}
``` 
### insert
Introduce una cadena de texto antes de la posición indicada por el índice.

```cpp
#include <iostream>
#include <string>

int main ()
{
  std::string str{"to be question"};
  std::string str2{"the "};
  
  str.insert(6,str2); 
  std::cout << str << "\n"; // -> to be (the )question
}
```

### erase
Elimina una porción de una cadena de texto, para ello indicamos la posición inicial y el número de caracteres a eliminar.

```cpp
#include <iostream>
#include <string>

int main ()
{
  std::string str{"This is an example sentence."};
  std::cout << str << '\n';  // -> This is an example sentence.
  str.erase (10,8);
  std::cout << str << '\n'; // -> This is an sentence.
}

```

### pop_back
Elimina el último carácter de una cadena de texto

```cpp
#include <iostream>
#include <string>

int main ()
{
  std::string str{"This is an example sentence"};
  std::cout << str << '\n'; // -> This is an example sentence
  str.pop_back();
  std::cout << str << '\n'; // -> This is an example sentenc
  str.pop_back();
  std::cout << str << '\n'; // -> This is an example senten
}
``` 

### find
Busca una cadena de texto dentro de otra desde el inicio o a partir de la posición que le pasemos. La función find devuelve en qué posición lo ha encontrado.

#### Desde el inicio

```cpp
#include <iostream>       
#include <string>         

int main ()
{
  std::string str{"There are two needles in this haystack with needles."};

  int found = str.find("needle");
  std::cout << "first 'needle' found at: " << found << '\n'; // -> first 'needle' found at: 14
  return 0
}
``` 
#### Desde una posición
```cpp
#include <iostream>       
#include <string>         

int main ()
{
  std::string str{"There are two needles in this haystack with needles."};

  int found = str.find("needle", 15);
  std::cout << "second 'needle' found at: " << found << '\n'; // -> second 'needle' found at: 44
  return 0
}
```

Si no encuentra la cadena devuelve -1

```cpp
#include <iostream>       
#include <string>         

int main ()
{
  std::string str{"There are two needles in this haystack with needles."};

  int found = str.find("dog");
  std::cout << "'dog' found at: " << found << '\n'; // -> 'dog' found at: -1
  return 0
}
``` 

### substr
Extrae una _subcadena_ de una cadena dada. Para ello indicamos la posición inicial y el número de carácteres a extraer.

```cpp
#include <iostream>
#include <string>

int main ()
{
  std::string str{"We think in generalities, but we live in details."};
  std::string str2 = str.substr (3,5); 
  std::cout << str2 << "\n"; // -> think
  return 0;
}
```
Al igual que los `std::set`, `std::array` y `std::vector` el `std::string` puede ser recorrido por un bucle [`for(auto elem :set)`](../flujo/forelem.md).

## Para completar
  * [Referencia del tipo string](http://www.cplusplus.com/reference/string/string/)
