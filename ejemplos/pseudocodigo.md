## Ejemplos Pseudocódigo (con solución)
### 1. ¿Qué muestra por pantalla?
``` 
CONT = 0
WHILE(CONT < 10)
   IF(CONT > 5) CONT = CONT + 2
   IF(CONT <= 5) CONT = CONT + 1
   PRINT(CONT)
```
**Solución** `1 2 3 4 5 6 8 10`

### 2. ¿Qué muestra por pantalla?
``` 
A = 1
B = 1
WHILE(A + B < 10)
   PRINT(A)
   A = A + B
   B = A + B
```
**Solución**: `1 2`

### 3. ¿Qué muestra por pantalla?
``` 
NUM = 1
CONT = 1
WHILE(CONT <= 10)
   IF(NUM es PAR)
	   PRINT(NUM)
	   CONT = CONT + 1
   NUM = NUM + 1
```
**Resultado**: `2 4 6 8 10 12 14 16 18 20`

### 4. ¿Qué muestra por pantalla cuando el usuario introduce un 5?
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
**Resultado**: `3`


### 5. Escribir en pseucódigo un programa que muestre los primeros 10 números múltiplos de 3

**Solución**
``` 
NUM = 1
CONT = 1
WHILE(CONT <= 10)
   IF(NUM es MULTIPLO DE 3)
	   PRINT(NUM)
	   CONT = CONT + 1
   NUM = NUM + 1
```
### 6. Escribir en pseucódigo un programa que calcule el factorial de 10

**Solución**
``` 
FACT = 1
NUM = 10
WHILE(NUM > 0)
   FACT = FACT * NUM
   NUM = NUM - 1
PRINT(FACT)
```
