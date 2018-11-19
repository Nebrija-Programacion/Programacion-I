

# Actividad Sesión 10

## Cuatro en línea
Vamos a crear un juego de Cuatro en línea, para 2 jugadores.

### Paso 1
El primer paso es crear una clase "Tablero". El tablero tiene 25 casillas (5 filas x 5 columnas) para ello nos debemos preguntar
  - ¿Qué tipos de variables voy a utilizar para guardar la información?
  - ¿Qué valores puede tomar cada casilla?
  
Las casillas pueden estar vacías, ocupadas por rojo u ocupadas por negro.

Elegir uno de los siguientes tipos de dato para albergar la información:
  - 25 variables.
  - Un array de 25 elementos.
  - 5 arrays de 5 elementos.
  - 1 vector
  - 5 vectores.

Implementar la clase con el tipo de dato escogido y programar el constructor para que inicialmente todas las casillas estén vacías.

### Paso 2

Ya estaría la clase con su constructor. Al hacer una variable de tipo Tablero, todas las casillas estarán vacías. Realizar ahora:

  - Una función "print" que muestre por pantalla el tablero. Podemos asignar a las fichas rojas una "x" y a las negras una "o". Las vacías puede no mostrarse nada. Un ejemplo de visualización podría ser
  
<pre>
      |   |   |   |   |   |
      | x |   |   |   |   |
      | o | x | o |   |   |
      | x | x | o | x |   |
      | o | o | o | x |   |
      ---------------------
</pre>
  
 ¿Es el tipo de dato que has escogido adecuado para esto? Si no, cámbialo.

### Paso 3
El siguiente paso es crear una función miembro que permita añadir fichas al tablero, ¿qué parametros tendría esa función?
  - Tipo de ficha ("o" o "x"), fila, columna.
  - Tipo de ficha, columna.
Elige una de las dos, no pienses sólo en lo que es más fácil para ti, sino también para el jugador, ¿cómo querría él que fuese?

### Paso 4
¿Has comprobado que las fichas que se añaden se pueden añadir? Es decir, hay espacio en el tablero para poner esa ficha. Si no lo has hecho, hazlo ahora.

### Paso 5
Para ver qué tal va el programa hasta ahora haz un main, que te vaya preguntando dónde quieres ir añadiendo fichas (alternativamente cada jugador, una roja y otra negra), y que después de añadir cada ficha imprima el tablero.

### Paso 6
Ahora que has hecho esto sólo te queda comprobar si algún jugador ha hecho 4 en línea. Vamos con las más fáciles
   - Detectar si hay línea horizontal.
   - Detectar si hay línea vertical.
   - 
### Paso 7
Finalmente vamos a detectar si hay líneas diagonales.

### Paso 8
Modifica el main para poder echar una partida. Estaría interesante que te pregunte el nombre de los jugadores y que vaya pidiendo a cada jugador por nombre dónde quiere echar su ficha.

