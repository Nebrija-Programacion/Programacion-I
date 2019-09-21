# Entrada y salida de texto

La biblioteca estándar de C++ incluye dos _objetos_ para la salida de texto por pantalla y la entrada de datos a través del teclado. Son los objetos `std::cin` y `std::cout` . No importa en este momentó qué significa que sean _objetos_. Lo que vamos a hacer es limitarnos a aprender cómo utilizarlos para mostrar texto por pantalla y leer datos introducidos a través del teclado.

Ambos objetos funcionan con los [tipos de datos simples de C++](../variables/tipossimples.md). Para otro tipo de datos necesitaremos sobrecargar los operadores `<<` y `>>` (veremos cómo se hace en la asignatura de Programación II).

Para utilizar ambos objetos necesitamos incluir la biblioteca `iostream`:

```cpp
#include <iostream>
```

## std::cin

A través del objeto _std::cin_ el valor que se introduce por teclado se asocia a una variable. Por ejemplo:

```cpp
#include <iostream>

int main() {
   int num;
   std::cout << "Introduce un número por teclado\n";
   std::cin >> num;
   std::cout << "El número introducido por teclado es " << num << "\n";
   return 0;
}

```
¿Qué hace este programa?
   1. Crea la etiequeta/variable num, que será de tipo _int_. No la inicializa con ningún valor.
   2. Muestra por pantalla el texto `Introduce un número por teclado`.
   3. Ahora el programa se queda esperando a que introduzcamos un valor por teclado y pulsemos `enter`.
   4. `número + enter`
   5. Se almacena el _número_ en la memoria del ordenador y se asocial a la variable _num_;
   6. Se muestra por pantalla: `El número introducido por teclado es {numero}`
   7. Finaliza el programa devolviendo _0_.

¿Qué pasaría si en lugar de introducir un número el usuario hubiera introducido por teclado una letra, o una palabra? _std::cin_ produciría un error, que podríamos detectar a través de la función `cin.fail()`. Aquí un ejemplo:

```cpp
#include <iostream>

int main() {
   int num;
   std::cout << "Introduce un número por teclado\n";
   std::cin >> num;
   if(std::cin.fail()){
       std::cout << "No has introducido un número\n";
   }else{
       std::cout << "El número introducido por teclado es " << num << "\n";
   }
   
   return 0;
}
```
Este programa es idéntico al anterior salvo en las líneas:

```cpp
   if(std::cin.fail()){
       std::cout << "No has introducido un número\n";
   }else{
       std::cout << "El número introducido por teclado es " << num << "\n";
   }
}
```

La función `std::cin.fail()` comprueba si se ha podido asocial el valor introducido a la variable `num`. Si no ha sido posible `std::cin.fail()` será `true` por lo que se ejecutará `std::cout << "No has introducido un número\n";`. En caso de que el valor se haya asociado correctamente con la variable  `std::cin.fail()` será `false`, ejecutándose `std::cout << "El número introducido por teclado es " << num << "\n";`.

### Ejercicio
¿Qué pasaría si en siguiente programa introducimos por teclado 234?

```cpp
#include <iostream>

int main() {
   std::string num;
   std::cout << "Introduce una palabra por teclado\n";
   std::cin >> num;
   if(std::cin.fail()){
       std::cout << "No has introducido una palabra\n";
   }else{
       std::cout << "La palabra introducida por teclado es " << num << "\n";
   }
   
   return 0;
}
```
### Concatenación de lecturas
 El objeto `std::cin` tiene la propiedad que nos permite concatenar la lectura de varilos valores introducidos por teclado, por ejemplo

```cpp
 #include <iostream>

 int main() {
   int num1;
   int num2;
   std::cout << "Introduce dos números por teclado y pulsa enter\n";
   std::cin >> num1 >> num2;
   std::cout << "Los números introducidos por teclado son " << num1 << " y " << num2 << "\n";
   return 0;
}
```

El modo correcto de introducir los dos números en este programa sería: `numero 1 + espacio + numero 2 + enter` o bien `numero 1 + enter + numero 2 + enter`.

También se pueden combinar tipos de datos:

```cpp
 #include <iostream>

 int main() {
   int num;
   std::string palabra;
   std::cout << "Introduce un número y una palabra por teclado y pulsa enter\n";
   std::cin >> num >> palabra;
   std::cout << "Los datos introducidos por teclado son " << num << " y " << palabra << "\n";
   return 0;
}
```

El modo correcto de introducir el número y la palabra en este programa sería: `numero + espacio + palabra + enter` o bien `numero + enter + palabra + enter`

### Leyendo una línea completa

Según acabamos de ver, cada fragmento escrito por teclado separado por espacios se guarda en una variable distinta. Es decir, si el usuario escribiera por teclado "En un lugar de La Mancha", necesitaríamos 6 variables de tipo `string` para almacenar en cada una de ellas una de las palabras, pero, *¿cómo debe ser nuestro programa para asociar toda la línea a una sóla variable de tipo `string`?* Se utiliza la función `getLine`.

```cpp
#include <iostream>
#include <string>

int main() {
  std::string line;
  std::cout << "Introduce una frase\n";
  std::getline(std::cin, line); // El usuario escribe 'En un lugar de La Mancha'
  std::cout <<"Has escrito: " << line << "\n"; // -> Has escrito: En un lugar de La Mancha
  return 0;
}
``` 

## std::cout

El funcionamiento de `std::cout` lo hemos visto a través de los ejemplos anteriores. Nos permite concatenar la salida por pantalla de valores asociados a variables o bien directamente de los valores.

```cpp
 #include <iostream>

 int main() {
   int numero_entero{10};
   float numero_decimal{1.4};
   std::string palabra{"hola"};
   std::cout << "El numero entero es " << numero_entero 
             <<", el numero decimal es " << numero_decimal 
             << ", la palabra es " << palabra 
             <<" y de regalo un 3\n";
   return 0;
}
```
¿Qué muestra por pantalla?