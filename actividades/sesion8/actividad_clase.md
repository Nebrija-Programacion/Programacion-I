
# Actividad Sesión 8

## Clase Genérica Vector
Vamos a crear una clase Vector que pueda albergar vectores de 2, 3 y 4 dimensiones. Además vamos a realizar las funciones oportunas para operar con los vectores.

### Paso 1
Crear una clase Vector con las siguientes características
  - Puede albergar vecotres de 2, 3 o 4 coordenadas
  - El número de coordenadas que tendrá el vector se lo pasamos en el constructor.
  - Por defecto todos los elementos del vector tendrán un valor 0.

### Paso 2
  - Para incializar los elementos del vector haremos una función viembro setElement(), que tome dos parámetros, el índice del elemento y el valor. Por ejemplo miVector.setElement(1,4.3); pondrá la coordenada 1 al valor 4.3
  - La función setElement() tiene que comprobar que el índice del elelemento sea coherente con el tamaño del vector.

### Paso 3
Crear las siguientes funciones miembro
  - module() -> devuelve el módulo del vector
  - unitVector() -> devuelve un objecto de la clase vector conteniendo el vector unitario correspondiente.

### Paso 4
Crear las siguientes funciones globales (no forman parte de la clase)
 - add() -> toma como parámetros dos objectos de la clase vector y devuelve otro objeto de la clase vector con la suma de ambos vectores
 - scalarMultiply() -> toma como parámetros dos objectos de la clase vector y devuelve el producto escalar de ambos

Estas funciónen deberá comprobar que ambos vectores se pueden sumar o multiplicar (tienen el mismo número de elementos).

### Activicad para Casa (10 puntos).
Entregar por gitHub como  un único proyecto de QtCreator (archivos .pro y .cpp)

 - Modificar la clase Vector para que sea genérica, es decir, que pueda albergar vectores de cualquier dimensión.
 - Modificar las funciones add() y scalarMultiply() acorde a la dimensión genérica.
 - Crear una función genérica que devuelva verdadero si los vectores son perpendiculares en el espacio n-dimensional o falso en caso contrario.
 - Crear una función que devuelva el ángulo en radianes entre dos vectores (de 3 coordenadas). (Este ha sido idea de JGil)
 - Crear una función genérica que devuelva el producto vectorial en dos vectores (sólo cuando los vectores son de 3 coordenadas).
 - Utilizar la Matriz creada anteriormente (de 3x3) y hacer una función que devuelva el resultado de multiplicar una matriz por un vector (de 3 coordenadas).
