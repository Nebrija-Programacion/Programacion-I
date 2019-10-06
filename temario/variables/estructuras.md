# Estructuras de datos

**Cuando realizamos una estructura de datos estamos creando un nuevo _tipo_**. Hemos visto que los datos siemples, son entre otros _int_, _float_, _bool_, _char_. A partir de esos tipos simples podemos crear **nuevos tipos más elaborados**. Es muy importante entender que lo que estamos haciendo es _enriquecer el lenguaje de programación creando **nuevos tipos**._

En la mayoría de los casos los datos no estarán aislados unos de otros, sino que tendrán algún tipo de relación entre ellos. Por ejemplo, los datos *edad*, *altura* y *peso* pueden ser los datos de una persona.

Las estructuras de datos nos permiten agrupar datos asociándolos a un solo *tipo*. Para ello debemos definir un nuevo tipo de dato **struct**. He aquí un ejemplo.

```cpp
  struct Person{
    int edad;
    float altura;
    float peso;
  };
``` 

Lo que hace este fragmento de código es **definir un nuevo tipo de dato** llamado _Person_. _Person_ no es una varaible, **es un tipo de dato**. Este nuevo tipo está conformado por varios **miembros**: _edad_, _altura_ y _peso_. 

Una vez creado el **nuevo tipo _Person_** podemos crear variables/etiquetas de tipo *Person*, y asociarles un valor a cada uno de sus *miembros* (campos de la estructura).

```cpp

  #include <iostream>

  // Declarion de un nuevo tipo llamado Person
  struct Person{
    int edad;
    float altura;
    float peso;
  };

  int main(){

    // Declaracion de variables de tipo Person
    Person juan;
    Person maria;

    // Asociacion de valores a los miembros de las variables de tipo Person
    juan.edad = 38;
    juan.altura = 182.5;
    juan.peso = 79.2;

    maria.edad = 24;
    maria.altura = 174;
    maria.peso = 56.4;

    // Acceso a los miembros de las variables de tipo Person
    std::cout << maria.edad << "\n";

    return 0;
  }

```

## Inicialización de estructuras

Una estructura se puede inicializar elemento a elemento, tal y como se ha visto en el fragmento de código anterior, o dandole valor a todos sus miembros mateniendo su orden.

```cpp

  struct Person{
    int edad;
    float altura;
    float peso;
  };

  Person juan{
    38,
    182.5,
    79.2
  }; 
```

Sin embargo, este modo de inicializar una estrucutra no es recomendable, ya que no se indica explícitamente a qué campo se está dando valor en cada caso.

## Estructuras anidadas

Las estrucuturas se pueden anidar para obtener estructuras más complejas. Por ejemplo

```cpp

  #include <iostream>

  // Crea un nuevo tipo de datos llamado Person
  struct Person{
    int age;
    float height;
    float weight;
  };

  // Crea un nuevo tipo de datos llamado Bascket3Team
  struct Basket3Team{
    Person player1; // player1 es de tipo Person
    Person player2; // player2 es de tipo Person
    Person player3; // player3 es de tipo Person
    unsigned int won_games;
    unsigned int lost_games;
  };

  // luis es una variable de tipo Person
  Person luis{
    38,
    182.5,
    79.2
  };

  // maria es una variable de tipo Person
  Person maria{
    29,
    178.3,
    58.3,
  };

  // juan es una variable de tipo Person
  Person juan{
    34,
    197.2,
    87.5
  };

  // warriors es una variable de tipo Bascket3Team
  Basket3Team warriors{
    luis,
    maria,
    juan,
    10,
    3
  };

  int main(){
    std::cout << warrios.player2.age << "\n"; // it prints maria.age -> 29
    return 0;
  }
```


