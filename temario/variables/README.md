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

**C++ es un lenguaje tipado**, es decir, al escribir el código debo indicar qué tipo de datos va a estar asociado a cada variable (etiqueta). El compilador se encargará que comprobar que esto es consistente a lo largo de todo el programa.

Por ejemplo, el siguiente programa daría un error de compilación, porque estoy intentando asociar a una variable de tipo entero (_int_) un dato decimal.

```cpp
  int a = 3.5; // Error de compilacion
```

Es muy importante distinguir entre el tipo y el nombre;

```int a; ``` crea una etiqueta, o variable, de **tipo entero** y con nombre **a**. Del mismo modo, imaginemos que existiese un tipo ``` Person ``` en un supuesto lenguaje de programación, entonces:

``` Person alberto; ``` crearía una variable **llamada** _alberto_ de tipo _Person_. De hecho nuestro programa podría declarar varias variables **de tipo** _Person_

```
  Person alberto;
  Person maria;
  Person laura;
  Person luis;
 ```

Es fundamental no confundir el tipo: _Person_ con el nombre de la variable/etiqueta _alberto_, _maria_, _laura_, _luis_.


Vamos a seguir aclarando cómo funciona un programa al crear variables y asociarles datos.

```cpp
 int age = 37;
 std::cout << age << "\n";
```

El código `std::cout << algo << "\n";` lo que hace es mostrar por pantalla _algo_. Por lo tanto, qué hace este fragmento de código. `"\n"` es un salto de línea.

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
 std::cout << age << "\n";
 age = 22;
 std::cout << age << "\n";
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



## Constantes

En C++ las variables (etiquetas) podemos marcarlas como constantes. Con esto, le indicamos al compilador que esa etiqueta no podrá ser asociada a ningún otro valor (es decir, no podrá cambiar). Indicamos que una variable es constante, anteponiéndole la palabra _const_

```cpp
 const int bornDate = 1982;
 std::cout << bornDate << "\n";
```

El siguiente programa produciría un error de compilación, ya que estamos intentando asociar a la etiqueta _bornDate_ un nuevo valor.

```cpp
 const int bornDate = 1982;
 std::cout << bornDate << "\n";
 bornDate = 1991; //error de compilacion
```

## Declaración e inicialización de variables

La declaración de una variable siempre sigue la misma estructura:

### Variable sin inicializar

```TIPO NOMBRE;```

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


### Variable inicializada

```TIPO NOMBRE = VALOR INICIAL;```

o bien

```TIPO NOMBRE{VALOR INICIAL};```


*Hay 2 modos de incializar variables en C++*, el modo clásico es como se ha visto anteriormente

```cpp
 int a = 3;
```
En C++ moderno las variables se pueden inicializar de este otro modo:

```cpp
 int a{3};
```

<a href = "http://www.stroustrup.com/" target="_blank">Bjarne Stroustrup</a>, creador de C++, recomienda que se inicialicen utilizando la notación moderna `int a{3};`. La justificación requiere un conocimiento más profundo de C++.

### Asociación de una variable con un valor

La asignación/asociación siempre se realizará usando el operador `=`

```cpp
 int a{3};
 a = 2;
```

Dado a que **no podemos asociar valores a las variables constantes después de crearlas** las constantes siempre se deberán inicializar cuando se crean.

```cpp
 const int bornDate; // error de compilacion
```

## Errores comunes

### Variables no inicializadas

El siguiente fragmento de código es posible, pero, ¿qué mostraría por pantalla?

```cpp
 int age;
 std::cout << age << "\n";
 age = 22;
```

**No podemos saberlo**. En este fragmento de código estamos accediendo al valor asociado a la variable _age_ antes de asociarle un valor, por lo que no sabemos qué se mostrará por pantalla. Es un error muy habitual usar una variable (etiqueta) antes de asignarle un valor. El programa funcionará, pero dará resultados impredecibles (y a menudo difíciles de detectar). Es por ello que es buena práctica **inicializar siempre las variables**.

### Usar una variable antes de declararla

C++ es un lenguaje que se compila de arriba a abajo, por lo tanto, antes de poder usar cualquier variable (etiqueta) debe haber sido declarada antes.

```cpp
 std::cout << age << "\n"; // Error de compilacion, age no existe
 int age = 22;
```

C++ proporciona _unos pocos_ tipos simples para los datos, enteros, decimales, carácteres, bool, etc. Con estos tipos simples luego construiremos tipos más elaborados, que no dejarán de ser agrupaciones de tipos simples. Sería como decir que en un edificio hay _unos pocos_ tipos simplres, que serían los ladrillos, las baldosas, las tejas, etc. y esos _tipos simples_ se asocial para construir elementos más complejos como pueden ser suelos, tejados, paredes, etc.

Éstos son los **[tipos simples](./tipossimples.md)** más importantes que proporciona C++. A partir de esos tipos simples podemos elaborar tipos más complejos, las **[estrucutras de datos](./estructuras.md)**. A su vez, C++ tiene sus propias estructuras de datos elaboradas, que están incluídas en la biblioteca estándar de C++. Los estudiamos en la sección: **[Tipos de la biblioteca std](./std.md)**.

Finalmente C++ nos proporciona una herramienta para poder manejar en mayor detalle las asociaciones entre variables/equiteas y los datos asociados, son los **[punteros](./punteros.md)**.
