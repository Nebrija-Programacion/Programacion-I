# Trabajo III - Programación I

*Equipos de 3 personas (o 4 personas en caso de hacer la ampliación)* - *Máximo 3 grupos por orden de solicitud*

## Gestión de datos de alumnos

## Enunciado
Se deberá realizar una base de datos con información sobre los alumnos de clase y guardarla en un archivo.

### Información Alumno
Se debe almacenar la siguiente información del alumno:
   - Nombre y Apellidos.
   - DNI.
   - Correo electrónico.
   - Nota Parcial.
   - Nota media de las Prácticas.
   - Nota de Participación.
   - Nota del Trabajo.
   - Nota del Examen Final.
   - Nota final de la asignatura.
   
 La nota final de la asignatura se calculará teniendo en cuenta los porcentajes correspondientes a cada apartado.
 
 Al iniciar el programa se debe ir pidiendo la información de los alumnos uno a uno, 
 hasta que el usuario indique que ya ha introducido toda la información. Una vez introducidos todos los datos el programa debe:
 
   - Mostrar la nota media y desviación típica (de todos los alumnos) de cada una de las notas.
   - Mostrar el listado de alumnos con su nota final de la asignatura.
   - Mostrar el número de alumnos suspensos.
   - Mostrar el número de alumnos aprobados.
   - Mostrar menor nota final de la asignatura.
   - Mostrar la mayor nota final de la asignatura.
 
 Además el programa debe generar un archivo 'notas.txt' con la siguiente estructura:
 
  '
    nombre_alumno_1 ; apellidos_alumno_1 ; DNI ; correo ; nota_parcial ; nota_practicas ; ... ; nota_final
    nombre_alumno_2 ; apellidos_alumno_2 ; DNI ; correo ; nota_parcial ; nota_practicas ; ... ; nota_final
    nombre_alumno_3 ; apellidos_alumno_3 ; DNI ; correo ; nota_parcial ; nota_practicas ; ... ; nota_final
    ...
    nombre_alumno_n ; apellidos_alumno_n ; DNI ; correo ; nota_parcial ; nota_practicas ; ... ; nota_final

## Ampliación
Como ampliación se propone que el programa pueda leer el archivo .txt guardado en lugar de pedir los datos al usuario cada vez.

## Notas
  - El programa debe comprobar en todo momento que los datos introducidos por el usuario y las operaciones a realizar son coherentes. Por ejemplo, no se pueden sumar una matriz de 3x3 con una de 2x2
  - Las operaciones matemáticas deben ser correctas, el programa no será válido si por ejemplo, desviación típica se hace mal.


## Rúbrica de Evaluación (sin ampliación)
| Tarea | Valoración  
| -- | -- |
|El programa pide al usuario los datos, gestiona los errores, y crea los objetos necesarios correctamente| 2 puntos  |
|El programa muestra por pantalla las medias correctamente  | 2 puntos |
|El programa muestra por pantalla las desviaciones típicas correctamente  | 2 puntos |
|El programa muestra por pantalla el número de aprobados, suspensos y notas máxima y mínima correctamente  | 2 puntos |
|El programa guarda los datos en un archivo correctamente  | 2 puntos |

## Rúbrica de Evaluación (con ampliación)
| Tarea | Valoración  
| -- | -- |
|El programa pide al usuario los datos, gestiona los errores, y crea los objetos necesarios correctamente| 1 puntos  |
|El programa muestra por pantalla las medias correctamente  | 1.5 puntos |
|El programa muestra por pantalla las desviaciones típicas correctamente  | 1.5 puntos |
|El programa muestra por pantalla el número de aprobados, suspensos y notas máxima y mínima correctamente  | 2 puntos |
|El programa guarda los datos en un archivo correctamente  | 2 puntos |
|El programa lee los datos en un archivo correctamente  | 2 puntos |
