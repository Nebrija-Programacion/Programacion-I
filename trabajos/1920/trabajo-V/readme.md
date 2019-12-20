# Trabajo V - Programación I - Puntuación posible 7 puntos

## Ahorcado

## Enunciado
Se debe desarrollar un juego del ahorcado, en la que el jugardor tiene 3 vidas y gana si acierta 5 palabras antes de agotar las vidas.
En cada turno sucederá lo siguiente:
  - El jugador indica una letra. Si la letra pertenece a la palabra, aparece, en caso contrario se dibuja una parte del ahorcado.
  - Si se dibuja "el ahorcado" entero pierde una vida, pero continúa rellenando la misma palabra.
  - Si acierta la palabra aparecerá una palabra nueva.
  - Si acierta 5 palabras se gana el juego.
  - Si pierde las 3 vidas pierde el juego.
  - Tanto si gana como si pierde le debe preguntar si quiere jugar de nuevo.

## Las palabras
Las plabras deben leerse de un archivo de texto contiene 200 palabras (una por línea). El juego debe escoger 5 palabras al azar para cada partida.

  
## Rúbrica de Evaluación (sin ampliación)
| Tarea                                                                                                    | Valoración |
| -------------------------------------------------------------------------------------------------------- | ---------- |
| El programa pregunta correctamente al jugador qué letra introducir y comprueba si es parte de la palabra | 2 puntos   |
| El programa gestiona bien el dibujo del ahorcado si se falla la letra                                    | 2 puntos   |
| El programa gestiona bien cuando un jugador pierde una vida                                              | 2 puntos   |
| El programa gestiona bien cuando el jugador gana la partida                                              | 2 puntos   |
| El programa lee bien las palabras del archivo de texto                                                   | 2 puntos   |

Cada apartado se puntuará según el siguiente criterio
  - Funciona correctamente, pero la solucion aportada no es buena - 50%
  - Funciona correctamente y la solución aportada es correcta pero se podría mejorar según lo explicado en clase - 75%
  - Funciona correctamente y la solución aportada es correcta según lo explicado en clase - 100%
