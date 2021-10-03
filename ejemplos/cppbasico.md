## Ejemplos código básico (con solución)
### 1. Escribir en C++ el siguiente programa en pseudocódigo
``` 
CONT = 1
WHILE(CONT < 10)
   IF(CONT > 5) CONT = CONT + 2
   IF(CONT <= 5) CONT = CONT + 1
   PRINT(CONT)
```
**Solución** 

```cpp
#include <iostream>

int main(){
   int cont{1};
   while(cont < 10){
      if(cont > 5){
         cont = cont + 2;
      }
      if(cont <= 5){
         cont = cont + 1;
      }
      std::cout << cont << " ";
   }
}
```

### 2. Escribir en C++ el siguiente programa en pseudocódigo
``` 
A = 1
B = 1
WHILE(A + B < 10)
   PRINT(A)
   A = A + B
   B = A + B
```
**Solución**

```cpp
#include <iostream>

int main(){
   int a{1};
   int b{1};
   while(a + b < 10){
      std::cout << a;
      a = a + b;
      b = a + b;
   }
}
```


### 3. Escribir en C++ el siguiente programa en pseudocódigo
``` 
NUM = 1
CONT = 1
WHILE(CONT <= 10)
   IF(NUM es PAR)
	   PRINT(NUM)
	   CONT = CONT + 1
   NUM = NUM + 1
```
**Solución**

```cpp
#include <iostream>

int main(){
   int num{1};
   int cont{1};
   while(cont <= 10){
      if(num % 2 == 0){
         std::cout << num << " ";
         cont = cont + 1;
      }
      num = num + 1;
   }
}
```

### 4. Escribir en C++ el siguiente programa en pseudocódigo
``` 
CONT = 0
NUM = 1
PRINT("Escribe un número:")
USER_INPUT(NUM)
WHILE(NUM > 0)
   IF(NUM es PAR)
	   NUM = NUM - 1
   NUM = NUM - 1
   CONT = CONT + 1
PRINT(CONT)
```
**Solución**

```cpp
#include <iostream>

int main(){
   int cont{0};
   int num{1};
   std::cout <<"Escribe un número: ";
   std::cin >> num;
   while(num > 0){
      if(num % 2 == 0){
         num = num - 1;
      }
      num = num - 1;
      cont = cont + 1;
   }
   std::cout << cont << "\n";
}
```


### 5. Escribir en C++ el siguiente programa en pseudocódigo

``` 
NUM = 1
CONT = 1
WHILE(CONT <= 10)
   IF(NUM es MULTIPLO DE 3)
	   PRINT(NUM)
	   CONT = CONT + 1
   NUM = NUM + 1
```


```cpp
#include <iostream>

int main(){
   int num{1};
   int cont{1};
   while(cont <= 10){
      if(num % 3 == 0){
         std::cout << num <<"\n";
         cont = cont + 1;
      }
      num = num + 1;
   }
}
```

### 6. Escribir en C++ el siguiente programa en pseudocódigo


``` 
FACT = 1
NUM = 10
WHILE(NUM > 0)
   FACT = FACT * NUM
   NUM = NUM - 1
PRINT(FACT)
```

**Solución**

```cpp
#include <iostream>

int main(){
   int fact{1};
   int num{10};
   while(num > 0){
      fact = fact * num;
      num = num - 1;
   }
   std::cout << fact << "\n";
}
```

**Los ejemplos del 7 al 12 son malas prácticas de programación, dado que declaran variables con el mismo nombre dentro de distintos ámbitos (variable shadowing)**

### 7. ¿Qué muestra por pantalla el siguiente programa? ¿por qué?
```cpp
#include <iostream>

int main() {
  int a{3};
  if(a == 3){
    a = 4;
  }
  std::cout << a << "\n";
}
``` 

 1. El programa reserva en memoria un espacio para una variable de tipo `int` (entero) y le asocial la etiqueta (nombre de variable) `a`. Esta variable pertenece al ámbito de la función `main`.
 2. La varaible `a` se inicializa con un valor de `3`.
 3. Dentro del `if` se le asigna a la variable `a` un valor de `4`.
 4. Se muestra por pantalla el valor de `a`, que es `4`.

### 8. ¿Qué muestra por pantalla el siguiente programa? ¿por qué?
```cpp
#include <iostream>

int main() {
  int a{3};
  if(a == 3){
    int a = 4;
  }
  std::cout << a << "\n";
}
``` 

 1. El programa reserva en memoria un espacio para una variable de tipo `int` (entero) y le asocial la etiqueta (nombre de variable) `a`. Esta variable pertenece al ámbito de la función `main`.
 2. La varaible `a` se inicializa con un valor de `3`.
 3. Dentro del `if` se declara una nueva variable, también con nombre `a` y se le asigna un valor de `4`. Esta variable `a` pertenece al ámbito del `if` y es diferente a la variable `a` del ámbito del `main`.
 4. Se muestra por pantalla el valor de `a` en el ámbito `main`, que es `3`.

### 9. ¿Qué muestra por pantalla el siguiente programa? ¿por qué?
```cpp
#include <iostream>

int main() {
  int a{3};
  if(a == 3){
    int a = 4;
    if(a == 4){
       a++;
    }
    std::cout << a << "\n";
  }
  std::cout << a << "\n";
}
``` 

 1. El programa reserva en memoria un espacio para una variable de tipo `int` (entero) y le asocial la etiqueta (nombre de variable) `a`. Esta variable pertenece al ámbito de la función `main`.
 2. La varaible `a` se inicializa con un valor de `3`.
 3. Dentro del `if` se declara una nueva variable, también con nombre `a` y se le asigna un valor de `4`. Esta variable `a` pertenece al ámbito del `if` y es diferente a la variable `a` del ámbito del `main`.
 4. Dentro del segundo `if` se incrementa en una unidad la varaible `a` del ámbito del `if` que pasa a valer `5`.
 5. Se muestra por pantalla el valor de `a` en el ámbito `if`, que es `5`.
 6. Se muestra por pantalla el valor de `a` en el ámbito `main`, que es `3`.

### 10. ¿Compila correctamente el siguiente programa? ¿por qué?

```cpp
#include <iostream>

int main() {
  char a{'b'};
  if(a == b){
    std::cout << "yay";
  }
}

```
No compila correctamente porque `b` no es un caracter, sería el nombre de una variable que no existe. Lo correcto sería:

```cpp
#include <iostream>

int main() {
  char a{'b'};
  if(a == 'b'){
    std::cout << "yay";
  }
}

```

### 11. ¿Qué muestra por pantalla el siguiente programa y por qué?

```cpp
#include <iostream>

int main() {
  int a{10};
  int b{3};
  std::cout << a/b << "\n";
}
```
Se realiza la división entre 2 números de tipo `int` (esto se llama *división entera*) por lo que el resultado es un número entero, es decir `3`.

### 12. ¿Qué muestra por pantalla el siguiente programa y por qué?

```cpp
#include <iostream>

int main() {
  int a{10};
  float b{3};
  std::cout << a/b << "\n";
}
```
Se realiza la división entre 2 números, uno de tipo `int` y otro de tipo `float` (esto se llama *división decimal*) por lo que el resultado es un número decimal, es decir `3.3333`.
