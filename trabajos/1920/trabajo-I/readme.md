
# Trabajo I - Programación I - Nota posible: 10 puntos.

## Aplicación de análisis de datos y Business Intelligence

## Enunciado
Se deberá realizar una aplicación que lea un archivo de texto y extraiga alguna información significativa.

El archivo de texto contendrá los ingresos y gastos de una empresa, organizados por meses y por proyectos. Se debe extraer la siguiente:

  * Ingresos totales de la empresa a lo largo del año.
  * Gastos totales de la empresa a lo largo del año.
  * Resultado económico de la empresa a final de año (ingresos - gastos)
  * Mes con mayor beneficio (ingresos - gastos).
  * Mes con menor beneficio.
  * Ingresos medios por mes.
  * Gastos medios por mes.
  * Proyecto que genera mayores beneficios (ingresos - gastos).
  * Proyecto que genera menores beneficios (o pérdidas).
  
## Ejemplo de archivo

Los datos se organizarán en líneas con el siguiente formato: 

*mes:nombre_proyecto:ingreso_gasto*
*mes:nombre_proyecto:ingreso_gasto* 

siendo:

 * **mes**: el nombre del mes: enero, febrero, marzo, etc.
 * **nombre_proyecto**: el nombre del proyecto sin espacios. Habrá 4 posibles proyectos: *ProyectoA, ProyectoB, ProyectoC, ProyectoD*
 * **ingreso_gasto**: el movimiento económico, positivo para ingresos y negativo para gastos.

**No hay espacios entre los datos.**

    Enero:ProyectoA:1234.32
    Enero:ProyectoB:-21243.12
    Febrero:ProyectoA:12121.3
    Enero:ProyectoC:42323.53
    Abril:ProyectoD:23322
    ...
## Detalles del programa
   * Se recomienda desarrollar un programa que tenga las siguientes funciones:
	   * **Project getMaxIncomeProject();** //Devuelve una estructura con el nombre del proyecto con más ingresos, así como los datos del proyecto.
	   * **Project getMinIncomeProject();** //Devuelve una estructura con el nombre del proyecto con menos ingresos, así como los datos del proyecto.
	   * **Month getBestMonth();** //Devuelve una estructura con los datos del mes con mayores beneficios (ingresos - gastos).
	   * **Month getWorstMonth();** //Devuelve una estructura con los datos del mes con peores beneficios (ingresos - gastos)
	   * **int getAverageExpenses();** //Devuelve la media de gastos al mes.
	   * **int getAverageIncome();** //Devuelve la media de ingresos al mes.
	   * **int getTotalIncome();** //Devuelve el total de Ingresos
	   * **int getTotalExpenses();** //Devuelve el total de Gastos.
	   *  **void showAnalysis();** //Muestra los resultados
	   *  **void saveAnalysis(string file_name);** //Salva los resultados
   
**NOTA** *Se presupone que no hay errores en el archivo de datos. Es decir, estos se encuentra siempre correctamente formateados.*


## Rúbrica de Evaluación
| Tarea                                                                               | Valoración |
| ----------------------------------------------------------------------------------- | ---------- |
| El programa muestra el analísis correctamente                                       | 5 puntos   |
| El programa guarda los datos en un archivo de texto correctamente                   | 3 puntos   |
| El programa detecta cuando el archivo de datos no existe                            | 1 puntos   |
| El programa detecta cuando hay algún error escribiendo los resultados en el archivo | 1 puntos   |

Cada apartado se puntuará según el siguiente criterio
  - Funciona correctamente, pero la solucion aportada no es buena - 50%
  - Funciona correctamente y la solución aportada es correcta pero se podría mejorar según lo explicado en clase - 75%
  - Funciona correctamente y la solución aportada es correcta según lo explicado en clase - 100%

### Recursos útiles
  * [Cómo leer y escribir un archivo de texto](http://www.aprendeaprogramar.com/mod/resource/view.php?id=344)
  * [Cómo pasar de una cadena de texto a un número decimal](http://www.cplusplus.com/reference/string/stof/)
