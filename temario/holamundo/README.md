# Hola Mundo

El programa _Hola Mundo_ es el primer programa de ejemplo que se realiza en un lenguaje de programación, y sirve para comprobar que todo está bien instalado en el ordenador y funciona correctamente.

En C++ el programa _Hola Mundo_ es el siguiente

```cpp
 #include <iostream>

  int main(){
    std::cout << "Hola Mundo\n";
    return 0;
  }
 ```

 **Cualquier programa en C++ tiene como mínimo una función _main_**

 ```cpp
  int main(){
    // instructions
    return 0;
  }
 ```
 La función _main_ agrupa las instrucciones que se ejecutarán en el programa compilado. Esta función **termina siempre devolviendo un número entero** `return 0`. Por consenso, este valor es 0 cuando la ejecución ha sido correcta y cualquier otro valor para indicar que ha sucedido un error.

 El programa _Hola Mundo_ incluye además la instrucción `std::cout << "Hola Mundo\n";` esta instrucción C++ muestra por pantalla el texto _Hola Mundo_ y realiza un salto de línea `"\n"`.

 La instrucción `std::cout` está disponible en la biblioteca C++ _iostream_ por esa razón el programa empieza incluyendo dicha biblioteca `#include <iostream>`

