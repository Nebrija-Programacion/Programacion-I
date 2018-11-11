# Trabajo IV - Programación I

*Equipos de 4 personas* - *Máximo 4 grupos por orden de solicitud*

## Ruleta

La ruleta es un juego de azar jugado con una rueda que tiene 37 ranuras numeradas de 0 a 36. Las ranuras alrededor de la carrera son alternativamente rojas y negras con excepción de la rueda número 0, que es de color verde. El diseño permite a los jugadores de realizar sus apuestas sobre el número o color deseado/a

## Enunciado
Se debe desarrollar un juego de ruleta con 4 jugadores. Incialmente cada jugador dispone de 10 Euros. Puede apostar números enteros de Euros.
En cada turno sucederá lo siguiente:
  - Cada jugador decide cuánto dinero quiere apostar en ese turno (o puede retirarse).
  - Cada jugador realiza una (y solo una) de las siguientes apuestas:
     - Rojo o Negro
     - Numero de 1 a 36
  - Después de que los 4 jugadores hayan hecho sus apuestas se lanza la ruleta.
  - Si sale el 0, todo el dinero va a la banca.
  - Si acierta color, se duplica el dinero apostado (los pares son rojos, los impares negros).
  - Si acierta número, se multiplica por 35 el dinero apostado.

### Finalización del juego
  - El juego finalizará cuando todos los jugadores se hayan retirado (o no les quede dinero).
  - Un jugador sin dinero queda fuera del juego.
  
  Al finalizar el juego se debe mostrar cuánto dinero ha ganado cada jugador y cuánto dinero ha ganado la banca.

## Notas
  - El programa debe comprobar en todo momento que los datos introducidos por el usuario y las apuestas a realizar son coherentes, por ejemplo, no se puede apostar por el número 65.
  
## Rúbrica de Evaluación (sin ampliación)
| Tarea | Valoración |
| -- | -- |
|El programa pregunta correctamente a los cuatro jugadores qué desean hacer (apostar o retirarse)| 2 puntos  |
|El programa gestiona bien la suma de dinero (si se gana) o la resta (si se pierde)  | 2 puntos |
|El programa gestiona bien cuando un jugador decide abandonar la partida | 2 puntos |
|El programa gestiona bien cuando un jugador se queda sin dinero y deja la partida  | 2 puntos |
|El programa muestra bien lo que ha ganado cada uno (incluída la banca) al finalizar el juego | 2 puntos |

Cada apartado se puntuará según el siguiente criterio
  - Funciona correctamente, pero la solucion aportada no es buena - 50%
  - Funciona correctamente y la solución aportada es correcta pero se podría mejorar según lo explicado en clase - 75%
  - Funciona correctamente y la solución aportada es correcta según lo explicado en clase - 100%
