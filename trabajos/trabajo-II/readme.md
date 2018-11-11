# Trabajo II - Programación I

*Equipos de 2 personas* - *Máximo 6 grupos por orden de solicitud*

## Clase Matrices

## Enunciado
Se deberá realizar una clase que pueda albergar Matrices de cualquier dimensión (incluso matrices con una sola fila o una sola columna). Posteriormente se realizará un programa que trabaje con dicha clase.

La clase debe contener las siguientes funciones (y todas aquellas que el estudiante considere necesarias para completar el programa):

  - Función para obtener el determinante de la matriz (si existe, si no existe debe dar un error).
  - Función para obtener la inversa de la matriz (si existe, si no existe debe dar un error).
  - Función para obtener la traspuesta de la matriz (si existe, si no existe debe dar un error).
  
Además el programa debe contener las siguientes funciones globales:

  - add() -> sumas dos matrices.
  - multiply() -> multiplica dos matrices.
  
## Notas
  - El programa debe comprobar en todo momento que los datos introducidos por el usuario y las operaciones a realizar son coherentes. Por ejemplo, no se pueden sumar una matriz de 3x3 con una de 2x2
  - Las operaciones matemáticas deben ser correctas, el programa no será válido si por ejemplo, la multiplicación se hace mal.

## Programa principal
  - El programa debe pedir al usuario que introduzca la dimensión de las matrices con las que quiere trabajar.
  - A continuación le debe pedir los datos para tener dos matrices.
  - El programa debe mostrar por pantalla:
     - Determinate de ambas matrices.
     - Matriz inversa de ambas matrices.
     - Matriz transpuesta de ambas matrices.
     - Suma de ambas matrices.
     - Multiplicación de ambas matrices. 

## Rúbrica de Evaluación
| Tarea | Valoración  |
--|--|
|El programa muestra pide al usuario los datos, gestiona los errores, y crea los objetos correctamente| 1 puntos  |
|El programa calcula el determinante correctamente  | 3 puntos |
|El programa calcula la inversa correctamente (y gestiona cuando no tiene inversa) | 2 puntos |
|El programa calcula la transpuesta correctamente  | 2 puntos |
|El programa realiza la suma correctamente (y gestiona cuando las matrices no se pueden sumar) | 1 punto |
|El programa realiza la multiplicación correctamente (y gestiona cuando las matrices no se pueden multiplicar) | 1 punto |
