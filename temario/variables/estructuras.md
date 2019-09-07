# Estructuras de datos

En la mayoría de los casos los datos no estarán aislados unos de otros, sino que tendrán algún tipo de relación entre ellos. Por ejemplo, los datos *edad*, *altura* y *peso* pueden ser los datos de una persona.

Las estructuras de datos nos permiten agrupar datos asociándolos a una sola *variable* (etiqueta). Para ello debemos definir un nuevo tipo de dato **struct**. He aquí un ejemplo.

```cpp
  struct Person{
    int edad;
    float altura;
    float peso;
  };
``` 

Lo que hace este fragmento de código es definir un nuevo tipo de dato, llamado person. Ahora podemos crear variables de tipo *person*, asignarle un valor a cada uno de sus *miembros* (campos de la estructura) o acceder a su valor.

```cpp

  #include <iostream>

  struct Person{
    int edad;
    float altura;
    float peso;
  };

  int main(){

    Person juan;
    Person maria;

    juan.edad = 38;
    juan.altura = 182.5;
    juan.peso = 79.2;

    maria.edad = 24;
    maria.altura = 174;
    maria.peso = 56.4;

    std::cout << maria.edad << std::endl;

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

  struct Person{
    int age;
    float height;
    float weight;
  };

  struct Basket3Team{
    Person player1;
    Person player2;
    Person player3;
    unsigned int won_games;
    unsigned int lost_games;
  };

  Person luis{
    38,
    182.5,
    79.2
  };

  Person maria{
    29,
    178.3,
    58.3,
  };

  Person juan{
    34,
    197.2,
    87.5
  };

  Basket3Team warriors{
    luis,
    maria,
    juan,
    10,
    3
  };

  int main(){
    std::cout << warrios.player2.age << std::endl; // it prints maria.age -> 29
    return 0;
  }
```


