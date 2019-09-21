# Condicionales if - else if - else

Un programa donde no hubiera control de flujo tendría esta estructura:

<img src="./images/secuencial.png"
     alt="Secuencial"
     style="align: center;" />

Por ejemplo

```cpp
#include <iostream>

int main() {
  int number;
  std::cout << "Introduce un numero\n"; \\ Accion 1
  std::cin >> number; \\ Accion 2
  std::cout << "El numero es " << number << "\n"; \\ Accion 3
}
``` 

Sin embargo, lo habitual en un programa es que se tome distintos caminos en función del valor que puedan tener los datos, por ejemplo.

<img src="./images/if.png"
     alt="if"
     style="display: block; margin-left:auto; margin-right:auto" />