# Práctica I

## Matrices 3 x 3

**TOTAL: 10 puntos - 1 punto cada paso**

### Paso I - Crear una clase Matriz

Crear una clase Matriz que contenga:

 - Un array de 9 números reales. Serán los 9 elementos de la Matriz 3 x 3.
 - Un constructor que no reciba ningún parámetro.
 - Inicializar en el constructor el array con 0.

### Paso II - Crear la función setElement

Crear una función miembro de la clase llamada setElement(). Debe:

 - Tomar 3 parámetros: fila, columna, valor.
 - Modificar el array oportunamente para que el elemento fila, columna de la matriz tome el valor pasado por parámetro.
 - Gestionar con excepciones el posible error de que los parámetros fila y columna estén fuera de los límites de la Matriz (por ejemplo mayor de 3 o menor de 0)
 - 
### Paso III - Crear la función getElement

Crear una función miembro de la clase llamada getElement(). Debe:

 - Tomar 2 parámetros: fila, columna.
 - Devolver el valor del elemento de la matriz fila,columna.
 - Gestionar con excepciones el posible error de que los parámetros fila y columna estén fuera de los límites de la Matriz (por ejemplo mayor de 3 o menor de 0)

### Paso IV - Crear la función print

Crear una función miembro de la clase llamada print(). Debe:

 - Imprime por pantalla la matriz respetando filas y columnas

**Nota: *cout << "\t";* imprime por pantalla un tabulado en blanco**   


### Paso V - Crear la función setToIdentity

Crear una función miembro de la clase llamada setToIdentity(). La función debe hacer que la matriz sea igual a la matriz Identidad.

### Paso VI - Crear la función traspose

Crear una función miembro de la clase llamada traspose(). La función debe transponer la matriz.

### Paso VII - Crear la función add

Crear una función miembro de la clase llamada add(). La función debe:

 - Recibir otro objecto de la clase Matriz como parámetro.
 - Sumar las dos matrices. Es decir *a.add(b)* hace *a = a + b;*

### Paso VIII - Crear la función scalarMultiply

Crear una función miembro de la clase llamada scalarMultiply(). La función debe:

 - Recibir un número como parámetro.
 - Multiplicar escalarmente el número por la matriz.


### Paso IX - Crear la función preMultiply

Crear una función miembro de la clase llamada preMultiply(). La función debe:

 - Recibir otro objecto de la clase Matriz como parámetro.
 - Premultiplicar la matriz. Es decir *a.preMultiply(b)* hace *a = b x a;*

### Paso X - Crear la función postMultiply

Crear una función miembro de la clase llamada postMultiply(). La función debe:

 - Recibir otro objecto de la clase Matriz como parámetro.
 - Premultiplicar la matriz. Es decir *a.postMultiply(b)* hace *a = a x b;*

