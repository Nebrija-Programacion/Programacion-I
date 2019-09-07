# Tipos Simples

C++ está construído alrededor de una serie de tipos básicos, que posteriormente nos ayudarán a construir tipos más complejos.

## Tipos numéricos

C++ tiene dos tipos numéricos:

* Números enteros.
* Números decimales.

### Números enteros

C++ tiene los siguientes tipos básicos de números enteros:

* _short_ (16 bits): min: -32768, max: 32767
* _int_ (32 bits): min: -2147483648, max: 2147483647

Además cuenta con sus variaciones sin signo (siempre positivos)

* _unsigned short_
* _unsigned int_

### Números decimales

C++ cuenta con dos tipos decimales

* _float_ (32 bits): min: 1.2E-38, max: 3.4E+38
* _double_ (64 bits): min: 2.3E-308, max: 1.7E+308

A efectos prácticos en la mayoría de los casos se usarán los tipos _int_ para números enteros con signo, _unsigned int_ para números enteros positivos y _float_ para números decimales (salvo que necesitemos una precisión más elevada).

## Otros tipos

* _bool_ (8 bits). Puede almacenar dos valores: _true_ o _false_
* _char_ (8 bits). Para almacenar caracteres.
