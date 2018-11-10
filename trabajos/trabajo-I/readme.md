
# Trabajo I - Programación I

*Equipos de 4 personas* - *Máximo 3 grupos por orden de solicitud*

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
   * Desarrollar una clase **Analyzer** para analizar todos los datos.
   * El constructor de la clase debe tomar un único parámetro con el nombre del archivo. *El archivo debe estar en el mismo directorio que el ejecutable*.
   * La clase debe tener las siguientes funciones públicas:
	   * **string getMaxIncomeProject(int& amount);** //Devuelve el nombre del proyecto con más ingresos y guarda en el parámetro la cantidad.
	   * **string getMinIncomeProject(int& amount);** //Devuelve el nombre del proyecto con menos ingresos (o más gastos) y guarda en el parámetro la cantidad.
	   * **string getBestMonth(int& amount);** //Devuelve el mes con mayores beneficios (ingresos - gastos) y guarda en el parámetro la cantidad.
	   * **string getWorstMonth(int& amount);** //Devuelve el mes con menos beneficios (ingresos - gastos) y guarda en el parámetro la cantidad.
	   * **int getAverageExpenses();** //Devuelve la media de gastos al mes.
	   * **int getAverageIncome();** //Devuelve la media de ingresos al mes.
	   * **int getTotalIncome();** //Devuelve el total de Ingresos
	   * **int getTotalExpenses();** //Devuelve el total de Gastos.
	   *  **void showAnalysis();** //Muestra los resultados
	   *  **void saveAnalysis(string file_name);** //Salva los resultados
   * La clase debe gestionar los posibles errores de escritura y/o lectura del archivo de datos con excepciones.

**NOTA** *Se presupone que no hay errores en el archivo de datos. Es decir, estos se encuentra siempre correctamente formateados.*
### int main()
La función main del programa debe ser:

    int main(){
		try{
			string nombre_archivo;
			cout << "Introduce el nombre del archivo a analizar: ";
			cin >> nombre_achivo;
			Anaylizer myAnalyzer{nombre_archivo};
			myAnalyzer.showAnalysis();
			
			cout << "Introduce el nombre del archivo donde guardar los resultados: ";
			cin >> nombre_archivo;
			myAnalyzer.saveAnalysis(nombre_archivo);
			cout << "Finalizado" << endl;
		}catch(string e){
			cout << e << endl;
			return 1;
		}
		return 0;
	}


## Rúbrica de Evaluación
| Tarea | Valoración  |
--|--|
|El programa muestra el analísis correctamente| 5 puntos  |
|El programa guarda los datos en un archivo de texto correctamente  | 3 puntos |
|El programa detecta cuando el archivo de datos no existe  | 1 puntos |
|El programa detecta cuando hay algún error escribiendo los resultados en el archivo  | 1 puntos |

### Recursos útiles
  * [Cómo leer y escribir un archivo de texto](http://www.aprendeaprogramar.com/mod/resource/view.php?id=344)
  * [Cómo "trocear" una cadena de texto](https://en.cppreference.com/w/cpp/string/basic_string/find)
  * [Cómo pasar de una cadena de texto a un número decimal](http://www.cplusplus.com/reference/string/stof/)
