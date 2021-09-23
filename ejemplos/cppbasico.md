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
PRINT(NUM)
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
   std::cout << num << "\n";
}
```

