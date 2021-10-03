## Sesión 4

### Control de flujo

Hemos visto ya por encima el condicional `if` y el bucle `while`

Los programas serían excesivamente sencillos si todo lo que sucede es de arriba a abajo, sin ningún tipo de alteración. Sin embargo, en cualquier programa hay que tomar alternativas en función de los datos con los que se trabaja, por ejemplo: *Si el valor asociado a una variable entera es mayor que 0 mostrar por pantalla "es mayor que 0", en caso contraro mostrar "es menor que 0"*.

Prácticamente todos los lenguajes de programación implementan los mismos mecanismos para en control de flujo:

 * Condicionales.
 * Bucles.

Los **condicionales** ofrecen distinas alternativas en función del valor de los datos, los **bucles**, lo que ofrecen es la repetición de fragmentos de código en función del valor de los datos.

En C++ existen las siguientes instrucciones de control de flujo genéricas:

**Condicionales**
  * [_if_](ifelse.md)
  * [_if-else_](ifelse.md)
  * [_if-else if-else_](ifelse.md)
  * [_switch-case_](switch.md)

**Bucles**
  * [_for_](for.md)
  * [_while_](while.md)
  * [_do-while_](dowhile.md)


### String

Uno de los tipos de datos complejos de C++ es el tipo `string` que corresponde a una cadena de texto, y está formada por el tipo simple `char`.

En esta sesión vamos a ver en detalle este tipo [_std::string_](../temario/datosstd/string.md).

C++ también ofrece el bucle [`for elem:v`](forelem.md) para recorrer el tipos iterables : `std::string`.
