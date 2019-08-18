
# Práctica IV

## Juego de dados

**TOTAL: 10 puntos**

Se desea realizar un juego de azar para dos jugadores. 

Se tiene una bolsa con 20 bolas, numeradas del 1 al 20, sin repetirse ni faltar ningún número. El juego tiene las siguientes reglas: 

  - Sólo pueden jugar 2 jugadores. 
  - Al inicio del juego los jugadores apuestan cada uno qué número van a obtener, entre 10 y 50. 
  - Los jugadores van sacando bolas por turnos (cada vez uno). 
  - En cada turno un jugador puede plantarse o pedir bola (si un jugador se planta, el otro sigue jugando hasta que se plante). 

El juego acaba cuando ambos jugadores se hayan plantado o cuando se hayan acabado las bolas de la bolsa. 

 

### ¿Quién gana? 

Gana el jugador que más cerca se haya quedado del número apostado (sin importar si se ha pasado o no). 

Por ejemplo, imaginemos que el jugador 1 ha apostado al 15 y ha obtenido 16 puntos, y el jugador 2 ha apostado al 17 y ha obtenido 14 puntos. Ganará el jugador 1. 

 

### ¿Cuándo acaba el programa? 

El programa permite una sola partida. Una vez finalizado el juego, se muestra quién ha sido el ganador y su puntuación, y finaliza el programa. 

 

## PASO 1 (3 puntos)
Crear una clase Bolsa que:
  - Inicialice la bolsa con 20 bolas numeradas del 1 al 20.
  - Tenga una función "sacarBola" que saque una bola aleatoriamente y la elimine de la bolsa.
  - Tenga una función "quedanBolas" que devuelva verdadero o falso según queden bolas en la bolsa o no.

## PASO 2  (3 puntos)
Crear una clase Jugador que:
  - Contenga el número apostado por el jugador.
  - La suma de puntos acumulados.
  - Información sobre si el jugador se ha plantado o no.
  - Las funciones oportunas para modificar estos datos.
  
## PASO 3 (4 puntos)
Utilizando las clases Jugador y Bolsa crear el programa que gestiona el juego. 
