# Condicionales - switch-case

Al igual que las sentencias `if else` el switch case es una sentencia condicional para el control de flujo.

Mientras que el las setnencias `if else` solo admiten dos condiciones, y en caso de desear más alternativas debemos anidarlas, las sentencias `switch case` permiten controlar varias alternativas de flujo de modo sencillo, por lo que es recomendable para estos casos.

**En muy importante indicar** que las sentencias `switch case` sólo funcionan con **variables simples**, es decir: tipos numéricos, `char` y  `bool`. No funcionan con tipos complejos, como los `string` (este último, error muy típico).

La estrucutra genérica de una sentencia `switch case` es la siguiente.

```
swtich(var_name){
  case value1:
    // actions
    break;
  case value2:
    // actions
    break;
  ...
  default:
    // actions
} 
```

El siguiente diagrama de flujo expresa este funcionamiento

<p align="center">
<img src="./images/switch.png" alt="Switch-case"/>
</p>

La opción `default` no es necesaria.

Un ejemplo seria el siguiente:

``` 
int main() {
  int dado;

  // lanzo el dado

  switch(dado){
    case 1:
      std::cout << "Ha salido un 1";
      break;
    case 2:
      std::cout << "Ha salido un 2";
      break;
    case 3:
      std::cout << "Ha salido un 3";
      break;
    default:
      std::cout << "Ha salido más de 3";
  }
}
``` 

Las sentencias `switch case` pueden aglutinar varias condiciones, por ejemplo:

``` 
int main() {
  int dado;

  // lanzo el dado

  switch(dado){
    case 1:
    case 2:
      std::cout << "Ha salido un 1 o un 2";
      break;
    case 3:
    case 4:
      std::cout << "Ha salido un 3 o un 4";
      break;
    default:
      std::cout << "Ha salido más de 4";
  }
}
``` 

## Errores comuntes

Es necesario que cada sentencia `case` acaba con un `break`. ES un error común olvidarlo, en cuyo caso, el programa no funcionaría como estaba previsto.

Dentro de un `switch case` no podemos declarar variables, es decir, este código provocaría un error de compilación.

int main() {
  int dado;

  // lanzo el dado

  switch(dado){
    case 1:
    case 2:
      std::string{"Esto no compila"};
      std::cout << "Ha salido un 1 o un 2";
      break;
    case 3:
    case 4:
      std::cout << "Ha salido un 3 o un 4";
      break;
    default:
      std::cout << "Ha salido más de 4";
  }
}
``` 

Las sentencias `switch case` no pueden utilizarse con variables complejas, es un error típico usarlas con `string`

```
#include <iostream>
#include <string>

int main() {
  std::string palabra;
  std::cout << "Introduce una palabra: ";
  std::cin >> palabra;

  // ERROR-> palabra no tiene un tipo simple
  switch(palabra){
    case "hola":
      std::cout << "hola, gracias por saludar";
      break;
    case "adios":
      std::cout << "Que te vaya bonito";
      break;
  }
}
```

Si se hace un `switch case` con variables tipo `char` el valor va entre comillas simples

```
#include <iostream>

int main() {
  char letra;
  std::cout << "Introduce una letra: ";
  std::cin >> letra;

  // lanzo el dado
  switch(letra){
    case 'a':
      std::cout << "Has elegido la opción a";
      break;
    case 'b':
      std::cout << "Has elegido la opción b";
      break;
  }
}
```

