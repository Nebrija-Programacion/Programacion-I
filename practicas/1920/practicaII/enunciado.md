# Práctica I

Se desea realizar un juego del conecta 4
Este juego del conecta 4 va a ser algo simple (ya lo complicaremos). Solo hay que detectar filas o columnas, no es necesario detectar diagonales.

## Paso 1 (2 puntos)
Crear una estrucutra de datos oportuna que pueda albergar 5 filas x 5 columnas. Inicializar todos los elementos a 0. Durante el juego, 0 será casilla vacía. 1 será ficha roja y 2 será ficha negra.

Mostrar por pantalla el tablero, parecido a esto

```
0 0 0 0 0
0 0 0 0 0
2 0 1 0 0
1 0 2 0 0
1 1 2 1 0
```

## Paso 2 (3 puntos)
Vamos a empezar con un solo jugador.

El jugador elige en que columna desea introducir la ficha: 0, 1, 2, 3 o 4. Y la ficha cae hasta la casilla libre que corresponda. Si la columna está ocupada, el programa debe decir: "Columna llena, vuelve a intentarlo", hasta que el jugador elija una columna correcta.

Cada vez que se introduce una ficha se muestra por pantalla el tablero.

## Paso 3 (1 punto)

Cada vez que el jugador introduzca una ficha, comprobar si la columna tiene 4 en línea. Si es así, mostrar por pantalla el mensaje "Has conseguido una columna" y mostrar el tablero.

## Paso 4 (1 punto)

Cada vez que el jugador introduzca una ficha, comprobar si hay alguna fila con 4 en línea. Si es así, mostrar por pantalla el mensaje "Has conseguido una fila" y mostrar el tablero.

## Paso 5 (3 puntos)

Hacer el juego para 2 jugadores y hasta que uno de los dos gane o se llene el tablero.
