1. Introducir un texto por consola y devolver todas las palabras que tengan más de 3 vocales.

2. Programa que calcule la letra del DNI [Información Letra DNI](http://www.interior.gob.es/web/servicios-al-ciudadano/dni/calculo-del-digito-de-control-del-nif-nie\)

3. Introducir nota numérica por consola y devolver calificación (sobresaliente, Notable, Aprobado, Suspenso)

4. Mostrar el abecedario por pantalla con un único bucle.

5. Programa que pida al usuario el número del cual quiere visualizar su tabla de multiplicar.

6. Programa que solucione una ecuación de 2º grado a·X2+b·X+c=0, pidiendo al usuario los valores de a, b y c.

7. Programa que reste, sume y multiplique números complejos. (Crear la estructura adecuada para representar números complejos)

8. Pedir al usuario día, mes y año de nacimiento. Devolver signo de zodiaco y edad actual.

9. Ampliar el programa de resolución de ecuación de 2º grado para el caso de raíces imaginarias (generar una estructura adecuada para representar número imaginario)

10. Programa calculadora simple:
  * Mostrar menú contextual por pantalla con las opciones:
    + Introducir 2 números para operar.
    + Sumar 2 números.
    + Restar 2 números.
    + Multiplicar 2 números.
    + Dividir 2 numeros.
    + Salir.
  * Implementar las funcionalidades necesarias para resolver cada una de las opciones pedidas por el usuario a través de la consola.

11. Programa que gestione los alumnos de un curso
  * Generar una estructura que albergue la información de un alumno genérico:
    + Nombre
    + Nº de matrícula
    + Estructura de datos adecuada para albergar estructuras de datos que contengan nombre de asignatura y su calificación.
    + Crear un programa con las siguientes características:
    + Crear la función Ingreso (nombre y matrícula)
    + Crear la función Matricular (dar de alta asignaturas en el expediente)
    + Crear la función dar de baja alumno
    + Crear función poner nota en una de las asignatura
    + Crear la función mostrar expediente
    + Opción de salir del programa.

12. Programa que gestione una biblioteca ( ISBN, título, autor,...)
  * Generar una estructura que albergue la información necesaria para la clasificación de un libro:
    + Título
    + ISBN
    + Autor
    + Tags para clasificación (ej: #ciencia, #programación, #poesía, #novela, etc…)
    + Prestado a... (nombre de la persona que tiene el libro)
    + Ubicación
  * Crear un programa con las siguientes características:
    + Crear función alta de libro
    + Crear función dar de baja un libro
    + Crear funciones que permitan modificar los distintos miembros de la estructura.
    + Crear función prestar
    + Crear función buscar (para todos los miembros de la estructura)
    + Crear función listar libros
    + Crear función imprimir datos de un libro (guardar los datos de un libro en un fichero de texto)

13. Programa que gestione un parking:
  * Crear una estructura que albergue los datos del coche (matrícula, modelo, hora de entrada, hora de salida y ubicación)
  * El parking tendrá 10 plazas
  * El programa debe:
    + Dar de alta un coche en el sistema si hay espacio disponible
    + Listar por pantalla la ocupación actual del aparcamiento
    + Buscar en el sistema por matrícula o modelo
    + Validar el ticket (pedir al usuario el nº de matrícula o el modelo, calcular el importe en función de los minutos de estancia (5,99 céntimos por minuto)
    + Dar de baja un coche cuando abandone el parking y haya pagado (no puede salir si no ha validado el ticket).

14. Implementar un juego de lucha: 
  * Crear una estructura luchador con los campos nombre, vida, ataque y defensa. 
  * Pedir al usuario el número de luchadores con los que desea jugar e inicializarlos de manera aleatoria almacenándolos en una estructura de datos adecuada. 
  * Generar de manera aleatoria el cruce de peleas y simular el campeonato. 
  * Las reglas del combate son:
    + Por turnos restar el ataque del atacante a la defensa del rival y restarlo de su vida, hasta que uno de los dos se quede sin vida. 
    + Al terminar el combate el vencedor descansa hasta el siguiente cruce y recupera la vida que tuviera al principio.

15. Implementar el juego de “Simon dice”. En la primera ronda el programa generará un carácter aleatorio y lo mostrará por pantalla. Esperará 2s borrará la pantalla y retará al jugador a que ingrese el carácter que mostró. Si acierta añadirá un nuevo carácter aleatorio a la secuencia y los mostrará de nuevo. Sumará 1s al tiempo de espera y después de ese tiempo borrará la pantalla y retará al jugador de nuevo. Esta secuencia seguirá hasta que el jugador no sea capaz de recordar la secuencia. Al finalizar la partida se mostrará por pantalla el número de veces que ha acertado.
