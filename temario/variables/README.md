# Las variables

C++ (y casi cuaqluier lenguaje de programación) tiene como objetivo manipular datos, es decir, un programa, habitualmente, recibirá una serie de datos, los procesará, y ejecutará una serie de acciones en consecuencia (o producirá información a partir de ellos).

Estos datos pueden provenir de distintos orígenes: introducidos por el usuario, una base de datos, mediciones en tiempo real a través de sensores, etc. Por lo tanto, es fundamental para cualquier lenguaje de programación, poder almacenar estos datos para luego trabajar con ellos.

Se podría decir que un lenguaje de programación es tan bueno como lo sea su capacidad para almacenar y manipular datos. Lenguajes como Python o JavaScript están teniendo un gran éxito dado que permiten almacenar y manipular datos de un modo muy flexible y potente. Por lo tanto, **el pilar fundamental para aprender cualquier lenguaje de programación, es aprender los mecanismos que ofrece para almacenar y manipular datos**.

Los datos se guardan en la memoria física del ordenador en formato binario (0 y 1), es decir, los datos estarán _físicamente_ codificados en un espacio _físico_ de la memoria del ordenador. Las **variables**, son el mecanismo a través del cual el programador accede a esos datos.

Por ejemplo, si mi edad fuera 37, 37 es un dato, que se puede codificar como número entero del siguiente modo 100101 . Estos 1 y 0 son bits que estarán escritos en la memoria del ordenador. Nuestro programa necesita ahora _guardar_ esa ubicación de la memoria de nuestro ordenador y asignarle una etiqueta (un nombre) para poder acceder a este dato. Las **variables** son esas etiquetas, que nos permiten acceder a los datos.

Veamos cómo se escribe eso en C++

```cpp
 int age = 37;
```

¿Qué está pasando aquí realmente?

1. En primer lugar se está guardando en la memoria física de nuestro ordenador el dato 37 (100101)
2. Luego estoy creando una _etiqueta_ llamada _age_, y estoy indicándole a mi programa que esa etiqueta va a tener asociado un número entero (esto lo indica la palabra _int_).
3. Asocio a la etiqueta *age* el dato 37.

Vamos a modificar el programa

```cpp
 int age = 37;
 std::cout << age << std::endl;
```

El código `std::cout << algo << std::endl;` lo que hace es mostrar por pantalla _algo_. Por lo tanto, qué hace este fragmento de código.

1. Se guarda en la memoria física de nuestro ordenador el dato 37 (100101)
2. Estoy creando una _etiqueta_ llamada _age_, y estoy indicándole a mi programa que esa etiqueta va estar relacionada con un número entero (la palabra _int_).
3. Asocio a la etiqueta (variable) _age_ el dato 37.
4. Estoy indicando que quiero imprimir por pantalla la etiqueta (la variable) _age_.
5. El programa mirará si existe una etiqueta (variable) llamada *age*, y si existe (que en este código es que sí), mira a qué espacio físico del ordenaodr está asociada.
6. El programa irá a ese espacio físico, y comprueba que el dato es 100101
7. Como la etiqueta _age_ es un _int_ (número entero), interpretará 100101 como número entero, es decir, 37..
8. Muestra por pantalla el número 37.

En este caso, hemos utilizado la variable (etiquega) _age_ para acceder al valor que está asociada. También podemos asociarle a esa variable (etiqueta) un nuevo valor. Veamos el siguiente fragmento de código.

```cpp
 int age = 37;
 std::cout << age << std::endl;
 age = 22;
 std::cout << age << std::endl;
```

Veamos paso por paso qué sucede:

1. Se guarda en la memoria física de nuestro ordenador el dato 37 (100101)
2. Estoy creando una _etiqueta_ llamada _age_, y estoy indicándole a mi programa que esa etiqueta va estar relacionada con un número entero (la palabra _int_).
3. Asocio a la etiqueta *age* el espacio físico donde está almacenado el dato 37.
4. Estoy indicando que quiero imprimir por pantalla la etiqueta (la variable) _age_.
5. El programa mirará si existe una etiqueta (variable) llamada *age*, y si existe (que en este código es que sí), mira a qué espacio físico del ordenaodr está asociada.
6. El programa irá a ese espacio físico, y comprueba que el dato es 100101
7. Como la etiqueta _age_ es un _int_ (número entero), interpretará 100101 como número entero, es decir, 37..
8. Muestra por pantalla el número 37.
   **ATENCIÓN AHORA**
9. Se guarda en la memoria física de nuestro ordenador (en un lugar físicamente distinto) el dato 22 (10110)
10. El programa mirará si existe una etiqueta (variable) llamada *age*, y si existe (que en este código es que sí) asocio a la etiqueta (variable) _age_ el espacio físico donde está almacenado el dato 22
11. etc.

Este es el proceso fundamental para el manipulado de datos:

* Creo variables (etiquetas).
* Asocio datos a esas etiquetas (variables).
* Leo los valores asociados a esas etiquetas (variables).

**C++ es un lenguaje tipado**, es decir, al escribir el código debo indicar qué tipo de datos va a estar asociado a cada variable (etiqueta). El compilador se encargará que comprobar que esto es consistente a lo largo de todo el programa.

Por ejemplo, el siguiente programa daría un error de compilación, porque estoy intentando asociar a una variable de tipo entero (_int_) un dato decimal.

```cpp
  int a = 3.5;
```

## Constantes

En C++ las variables (etiquetas) podemos marcarlas como constantes. Con esto, le indicamos al compilador que esa etiqueta no podrá ser asociada a ningún otro valor (es decir, no podrá cambiar). Indicamos que una variable es constante, anteponiéndole la palabra _const_

```cpp
 const int bornDate = 1982;
 std::cout << bornDate << std::endl;
```

El siguiente programa produciría un error de compilación, ya que estamos intentando asociar a la etiqueta _bornDate_ un nuevo valor.

```cpp
 const int bornDate = 1982;
 std::cout << bornDate << std::endl;
 bornDate = 1991; //error de compilacion
```

## Declaración e inicialización de variables

Cuando declaramos una variable en C++ no es necesario que la asociemos con un valor desde el principio. Este fragmento de código crea primero las variables y luego las asocia con un valor.

```cpp
 int age;
 float weight;
 age = 27;
 weight = 75.6;
```

1. Se crea la variable _age_ que tendrá asociado un valor entero (_int_)
2. Se crea la variable _weight_ que tendrá asociado un valor decimal (_float_)
3. Se asocia a la variable age el valor 27.
4. Se asocia a la variable weight el valor 75.6

Dado a que **no podemos asociar valores a las variables constantes después de crearlas** las constantes siempre se deberán inicializar cuando se crean.

```cpp
 const int bornDate; // error de compilacion
```

*Hay 2 modos de incializar variables en C++*, el modo clásico es como se ha visto anteriormente

```cpp
 int a = 3;
```
En C++ moderno las variables se pueden inicializar de este otro modo:

```cpp
 int a{3};
```

<a href = "http://www.stroustrup.com/" target="_blank">Bjarne Stroustrup</a>, creador de C++, recomienda que se inicialicen utilizando la notación moderna `int a{3};`. La justificación requiere un conocimiento más profundo de C++.

La asignación siempre se realizará usando el operador =

```cpp
 int a{3};
 a = 2;
```


## Errores comunes

### Variables no inicializadas

El siguiente fragmento de código es posible, pero, ¿qué mostraría por pantalla?

```cpp
 int age;
 std::cout << age << std::endl;
 age = 22;
```

**No podemos saberlo**. En este fragmento de código estamos accediendo al valor asociado a la variable _age_ antes de asociarle un valor, por lo que no sabemos qué se mostrará por pantalla. Es un error muy habitual usar una variable (etiqueta) antes de asignarle un valor. El programa funcionará, pero dará resultados impredecibles (y a menudo difíciles de detectar). Es por ello que es buena práctica **inicializar siempre las variables**.

### Usar una variable antes de declararla

C++ es un lenguaje que se compila de arriba a abajo, por lo tanto, antes de poder usar cualquier variable (etiqueta) debe haber sido declarada antes.

```cpp
 std::cout << age << std::endl; // Error de compilacion, age no existe
 int age = 22;
```

Vamos a ver los tipos de variables más importantes de C++

* [Tipos simples](./tipossimples.md)
* [Estrucutras de datos](./estructuras.md)
* [Tipos de la biblioteca std](./std.md)
* [Punteros](./punteros.md)
