# Funciones Lambda  

Las funciones son una incorporación al C++ moderno que facilitan la *programación funcional*. Según [WikiPedia](https://es.wikipedia.org/wiki/Programaci%C3%B3n_funcional) *En informática, la programación funcional es un paradigma de programación declarativa basado en el uso de funciones matemáticas, en contraste con la programación imperativa, que enfatiza los cambios de estado mediante la mutación de variables.1 La programación funcional tiene sus raíces en el cálculo lambda, un sistema formal desarrollado en los años 1930 para investigar la definición de función, la aplicación de las funciones y la recursión. Muchos lenguajes de programación funcionales pueden ser vistos como elaboraciones del cálculo lambda.*

No importa mucho esta definición en este nivel, sin embargo veremos aplicicones muy potentes de la programación funcional gracias a las *funciones lambda*

Una *función lambda* es una variable (estrictamente hablando). Es decir, asociamos a una variable/etiqueta una función, y por lo tanto, podemos tratar la función como a cualquier otra variable.

Es decir, podemos:
  * Pasar una función lambda como parámetros de otras funciones.
  * Devolver una función lambda desde una función.

¿Cómo se declara y define una función lambda? Igual que cualquier otra varible: `tipo nombre = valor`.
Veamos un ejemplo:

```cpp

#include <iostream>
#include <functional>

std::function<int (int, int)> suma = [] (int a, int b) {
  return a + b;
};

int main() {
  std::cout << suma(3,4) << std::endl;
}
```

Vamos a analizarlo por partes:

  * `std::function<int (int, int)>` es el **tipo** de la variable:
    * `<int ...> quiere decir que devuelve un entero
    * `< ... (int, int)>` quiere decir que recibirá dos enteros como parámetros
  * `[]` quiere decir que no puede acceder a ninguna variable fuera de su ámbito. Ya veremos otros casos en los que si es posible.
  * `(int a, int b)` son los parámetros.
  * `{ return a + b };` el cuerpo de la función. Hay que prestar atención a que finaliza en `;`.


Es decir, el modo genérico de declarar una función lambda sería:

```cpp
std::function< tipo_de_retorno (tipo_param_1, tipo_param2, etc)> 
    nombre_funcion [](tipo1 nombre_1, tipo2 nombre2, ...) 
    { 
      // cuerpo_funcion 
    };
```

Es importante entender, que a nivel de funcionalidad, las funciones `suma1` y `suma2` son idénticas

```cpp
std::function<int (int, int)> suma1 = [] (int a, int b) {
  return a + b;
};

int suma2(int a, int b){
  return a+b;
}
```
Entonces, ¿por qué las funciones lambda?

## Composición de funciones

La composición de funciones es muy habitual en matemáticas, por ejemplo, supongamos:

```
f(x) = 2x + 1;
g(x) = (x+1)²

f(g(x)) = 2(x+1)² + 1
``` 

El mismo principio se aplica a las funciones lambda. Vamos a poner un ejemplo, que si bien es poco útil, muestra esto:

```cpp
#include <iostream>
#include <functional>

std::function<int (int, int)> suma = [] (int a, int b) {
  return a + b;
};

std::function<int (int, int) > resta = [] (int a, int b) {
  return a - b;
};

int operacion(int a, int b, std::function<int (int, int)> const & op){
  return op(a,b);
}

int main() {
  std::cout << "Introduce s para sumar 2 y 3 o r para restar 2 y 3: ";
  char c; std::cin >> c;

  if(c == 's') std::cout << operacion(2,3, suma);
  if(c == 'r') std::cout << operacion(2,3, resta);
}
```

Vamos a analizarlo en detalle:

```cpp
std::function<int (int, int)> suma = [] (int a, int b) {
  return a + b;
};

std::function<int (int, int) > resta = [] (int a, int b) {
  return a - b;
};
```

Declaramos 2 funciones lambda, `suma` y `resta`, ambas devuelven un entero y toman como parámetros 2 enteros.

```cpp
int operacion(int a, int b, std::function<int (int, int)> const & op){
  return op(a,b);
}
```
Declaramos una función (esta no es lambda, aunque también podría haberlo sido) `operacion`. Lo interesante de esta función es que uno de los parámetros que recibe es una función lambda.
  * Devuelve un `int`
  * Recibe 3 parámetros:
    * `a`, que es un número entero.
    * `b`, que es un número entero.
    * `op`, que es una función lambda que devuelve un `int` y recibe 2 `int` como parámetros.

Esta función `operacion` aplicará la función `op` sobre `a` y `b` y devolverá el resultado de `op`: `return op(a,b);`

La magia sucede en la función `main`

```cpp
int main() {
  std::cout << "Introduce s para sumar 2 y 3 o r para restar 2 y 3: ";
  char c; std::cin >> c;

  if(c == 's') std::cout << operacion(2,3, suma);
  if(c == 'r') std::cout << operacion(2,3, resta);
}
```

¿Qué está pasando?
 1. Se pide al usuario que introduzca 's' para sumar 2 y 3 y 'r' para restarlos.
 2. Si el usuario introduce 's' se ejecuta `operacion(2,3, suma)`, se decir, al llamar a `op(2,3)` llamaremos a `suma(2,3)`, que ya el parámetro `op` es `suma` (por referencia constante, pero funcionaría también si fuera por copia).
 3. Si el usuario introduce 'r' se ejecuta `operacion(2,3, resta)`, se decir, al llamar a `op(2,3)` llamaremos a `resta(2,3)`, que ya el parámetro `op` es `resta` (por referencia constante, pero funcionaría también si fuera por copia).

Este modo de trabajar permite que **todo sean variables** y que por lo tanto todo pueda ser tratado como variables.


### Ejemplos Composición de funciones
  * [Aplicar una transformación a un std::array](https://github.com/Nebrija-Programacion/Programacion-I/tree/master/ejemplos/funciones/composicion/transform)
  * [Filtrar un std::vector](https://github.com/Nebrija-Programacion/Programacion-I/tree/master/ejemplos/funciones/composicion/filter)
  * [Devolver `true` si un vector tiene un elemento que cumpla una condición](https://github.com/Nebrija-Programacion/Programacion-I/tree/master/ejemplos/funciones/lambda/contains)
  
## El tipo `auto`

Como se ha visto anteriormente el tipo `auto` en C++ se utiliza en aquellos casos en los que el compilador puede inferir qué tipo tiene una variable a partir de si unicialización.

Por ejemplo `auto a = 3` infiere que el tipo de la variable `a` es `int`. Lo mismo sucede con las functions lambda, ya que éstas no son otra cosa que variables. Por ejemplo, analicemos la siguiente declaración:

```cpp
auto foo = [](int a){
   return 3*a; 
  };
```
 * Se puede inferir que es una función lamda por la estrcutura `[]( ... ) { ... }`
 * Se puede inferir que tiene un parámetro de tipo `int`
 * Se puede inferir que el retorno `3*a` tiene tipo `int`
 
Por lo tanto, la declaración anterior es equivalente declarar el tipo específicamente:

```cpp
std::function<int (int)> foo  = []  (int a) {
      return 3*a;
  };
```

### Especificando el tipo de retorno cuando se usa `auto` 

Aunque en C++ moderno el compilador es capaz de inferir el tipo de retorno en las funciones lambda, también es posible especificarlo en la declaración (y sería recomendable por claridad del código y para eliminar ambigüedades en algunos casos).

En la ejemplo anterior específicamos el tipo de retorno del siguiente modo:

```cpp
auto foo  = []  (int a) -> int
  {
      return 3*a;
  };
``` 

Donde
  * `(int a)` indica que la función recibe un parámetro por copia de tipo `int` 
  * `-> int ` indica que la función devuelve un valor de tipo `int`.


## Definicion de una función lambda "en línea".

De forma informal se dice que una función lambda se define _en linea_ cuando al componer funciones se define directamente en el parámetro. Se puede explicar con la siguiente analogía

Si tenemos la siguiente función.

```cpp
int suma(int a, int b){
  return a + b;
}
```

Se puede llamar a la función `suma` del siguiente modo:

```cpp
int num1 = 4;
int num2 = 7;

suma(num1, num2);
``` 

En este caso, se llama a `suma` pasandole 2 variables. Pero también se podría llamar a `suma` pasándole 2 valores `suma(3,7)`.

Esto mismo se puede aplicar a las funciones lambda. Supongamos que tenemos la siguiente función `forEach` que recibe como segundo parámetro una función lambda:

```cpp
void forEach(std::vector<int> const & vec, std::function<void (int)> const & op){
    for(auto elem:vec){
        op(elem);
    }
}
```
Esta función recibe dos parámetros
 * `vec` que es un vector de enteros.
 * `op` que es una función lambda que recibe un entero y no devuelve nada.

Tal y como se ha visto hasta ahora, podríamos pasarle como parámetro la siguiente función lambda `print`

```cpp
    auto print = [](int e) -> void {
        std::cout << " " << e << " ";
    };
```

del siguiente modo:

```cpp
std::vector<int> myVector{1,2,3,4,5};
auto print = [](int e) -> void {
    std::cout << " " << e << " ";
};

forEach(myVector, print);
``` 

Pero también se podria haber definido `op` directamente en la llamada a `forEach` del siguiente modo:

```cpp
forEach(myVector, [](int e) -> void {
    std::cout << " " << e << " ";
});
```
Obteniéndose el mismo resultado. En muchas ocasiones un programa puede ser más legible si se declaran las funciones lambda en línea. Veamos el siguiente programa de ejemplo.

```cpp
#include <iostream>
#include <functional>
#include <vector>

std::vector<int> filter(std::vector<int> const & vec, std::function<bool (int)> const & op){
    std::vector<int> result;
    for(auto elem:vec){
        if(op(elem)) result.push_back(elem);
    }

    return result;
}

int main()
{

    std::vector<int> myVector{0,1,0,2,3,4,5};

    // it filters elements greater than 3 -> {4, 5}
    std::vector<int> result1 = filter(myVector, [] (int e) -> bool {
        return e > 3;
    });

    // it filters even elements -> {2, 4}
    std::vector<int> result2 = filter(myVector, [] (int e) -> bool {
        return (e % 2 == 0);
    });

    // this counts how many 0 are in the vector
    std::vector<int> result3 = filter(myVector, [] (int e) -> bool {
        return (e == 0);
    });

    std::cout << "There are "<< result3.size() << " elements with 0 value\n";

    return 0;
}
```

## Leyendo el contexto a través de una función lambda

Imaginemos que queremos realizar una función lambda que tenga acceso a variables que están fuera de su ámbito. Para ello debemos indicar cómo la función puede acceder a su contexto. Una función lambda puede acceder a su contexto de tres modos:
  * [] no puede capturar su contexto.
  * [&] capatura su contexto por referencia.
  * [=] captura su contexto por copia (hace una copia local -en su ámbito- del contexto).

### Acceso al contexto por copia

Veamos un ejemplo

```cpp
int main(){
    int x = 3;

    auto multiplyBy = [=](int m) -> int {
        return x*m;
    };

    std::cout << multiplyBy(2) << std::endl; // 6
    std::cout << multiplyBy(4) << std::endl; // 12
    return 0;
}
```

La función `multiplyBy` puede acceder a su contexto por copia, es decir, tiene acceso al valor de `x` realizando una copia local en su ámbito. Por ese motivo puede realizar `x*m`.

Sin embargo, esta programación, aunque correcta, no es recomendable, porque `multiplyBy` está accediendo a una variable (`x`) que no está en su ámbito. Más adelante, veremos un ejemplo semejante en la que sí es correcto este uso.

### Acceso al contexto por referencia

Veamos un ejemplo

```cpp
#include <iostream>
#include <functional>
#include <vector>

void forEach(std::vector<int> const & vec, std::function<void (int)> const & op){
    for(auto elem:vec){
        op(elem);
    }
}

int main()
{

    std::vector<int> myVector{1,2,3,4,5,6};
    std::vector<int> externalVector;

    forEach(myVector, [&](int e){
        if(e % 2 == 0) externalVector.push_back(e);
    }); // externalVector = { 2, 4, 6 }

    forEach(externalVector, [](int e){
        std::cout << e << "-";
    }); // -> 2 4 6

    return 0;
}
```
En primer lugar hemos definido una función `forEach`, que recibe un vector como referencia constante (no lo puede modificar) y una función lambda que realizar una operación sobre cada uno de los elementos de dicho vector.

En el programa principal (`main`) llamamos en primer lugar a `forEach` pasándole la siguiente función lambda:

```cpp
[&](int e){
  if(e % 2 == 0) externalVector.push_back(e);
}
```

 * Esta función lambda puede acceder a su contexto por referencia `[&]`. Es decir, tiene acceso por referencia a `myVector` y `externalVector`.
 * Si el parámetro `e` (que será cada elemento de `myVector`) es par, añadirá dicho elemento al vector `externalVector`, al que tiene acceso por referencia.

En este ejemplo, sin embargo, la llamada a `forEach` modifica una variable que está fuera de su ámbito (`externalVector`), lo cuál no es recomendable por ser un _efecto colateral_. El modo correcto de realizar la misma tarea habría sido con una función `filter` como se ha visto en ejemplos anteriores.


## Funciones que devuelven una funcion lambda.

Veamos un ejemplo muy sencillo de una funcion que devuelve una función lambda

```cpp
#include <iostream>
#include <functional>


std::function<void(std::string)> sayHello(std::string greeting){
    return [=](std::string name)->void {
        std::cout << greeting << " " << name << "\n";
    };
}

int main(){

    auto greetInSpanish = sayHello("hola");
    auto greetInEnglish = sayHello("hello");
    auto greetInItalian = sayHello("ciao");

    greetInSpanish("Alberto"); // hola Alberto
    greetInEnglish("Alberto"); // hello Alberto
    greetInItalian("Alberto"); // ciao Alberto
    return 0;
}
```

Analicemos la función `sayHello`.

* Devuelve una función lambda `void (std::string)`. Es decir devuelve una función lambda que no tiene valor de retorno y recibe como parámetro un `string`.
* Recibe como parámetro un `string`.

El valor de retorno de `sayHello` es:

```cpp
[=](std::string name)->void {
        std::cout << greeting << " " << name << "\n";
};
```
Analicemos:

* La función lambda de retorno accede al contexto haciendo una copia local `[=]`
* La función lambda de recibe un `string` como parametro (eso ya lo sabiamos, porque es el valor de retorno de `sayHello`)
* La función lambda de retorno no devuelve nada (eso ya lo sabiamos, porque es el valor de retorno de `sayHello`).

¿Qué hace esta funcion lambda?. Muestra por pantalla `greeting name`. 
  * `greeting` es *una copia* del parámetro de `sayHello`
  * `name`es el parámetro de la función lambda.

Avanzamos, ¿qué pasa en el `main`?

```cpp
auto greetInSpanish = sayHello("hola");
```

`greetInSpanish` será una función lambda, que copia localmente `hola` en greeting. Por lo tanto, `greetInSpanish` será:

```cpp
std::cout << "hola" << " " << name << "\n";
```

Analógcamente sucederá con las demás funciones `greetInEnglish` y `greetInIntalian`.

**¿Qué pasaría si la función de retorno accediese al contexto por referencia `[&]` en lugar de por copia `[=]`?**