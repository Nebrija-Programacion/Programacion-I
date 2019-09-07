# Tipos Simples

C++ está construído alrededor de una serie de tipos básicos, que posteriormente nos ayudarán a construir tipos más complejos.

## Tipos numéricos

C++ tiene dos tipos numéricos:

* Números enteros.
* Números decimales.

### Números enteros

C++ tiene los siguientes tipos básicos de números enteros:

| Tipo  | Descripción              | Valor Mínimo | Valor Máximo |
| ----- | ------------------------ | ------------ | ------------ |
| short | Número entero de 16 bits | -32768       | 32767        |
| int   | Número entero de 32 bits | -2147483648  | 2147483647   |

```cpp
  short a{-1234};
  int b{123342};
```

Además cuenta con sus variaciones sin signo (siempre positivos)

* _unsigned short_
* _unsigned int_

```cpp
  unsigned short a{1234};
  unsigned int b{123342};
```


### Números decimales

C++ cuenta con dos tipos decimales


| Tipo   | Descripción                                 | Valor Mínimo | Valor Máximo |
| ------ | ------------------------------------------- | ------------ | ------------ |
| float  | Número decimal (32 bits)                    | 1.2E-38      | 3.4E+38      |
| double | Número decimal de doble precisión (64 bits) | 2.3E-308     | 1.7E+308     |

```cpp
  float a{2.3233};
  double b{4.232};
```


A efectos prácticos en la mayoría de los casos se usarán los tipos _int_ para números enteros con signo, _unsigned int_ para números enteros positivos y _float_ para números decimales (salvo que necesitemos una precisión más elevada).

## Otros tipos

| Tipo | Descripción                                             |
| ---- | ------------------------------------------------------- |
| bool | Puede almacenar dos valores: _true_ o _false_  (8 bits) |
| char | Para almacenar caracteres. (8 bits)                     |

```cpp
  bool a{true};
  char b{'x'}; // los caracteres se ponen entre comillas simples
```