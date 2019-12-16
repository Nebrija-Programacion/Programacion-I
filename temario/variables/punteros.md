# Punteros 
Como se ha visto, las variables son _etiquetas_ que permiten asociar un _nombre_ a un _valor_. Por ejemplo, cuando hacemos `int num = 23;`, estamos creando una etiqueta/variable llamada `num` y le estamos asociando un valor de `23`.

Los punteros son variables, en las que se asocia la etiqueta/nombre con una dirección de memoria, y en esa dirección de memoria se almacenará un valor. Al contrario de las _variables no punteros_, que se asocial un nombre a un valor, en los punteros, se asocial un nombre a una dirección de memoria.

## Declaración de un puntero
La declaración de un puntero se realiza del siguiente modo:

```cpp
tipo * nombre;
``` 

Por ejemplo

```cpp
int* p_num;
```
declara una variable llamada `p_num` que albergará la dirección de memoria de un `int`. 

## Inicialización / asignación

Es importante recordar que en el ejemplo anterior `p_num` no está asociada a un `int` sino a la dirección de memoria en la que se guardará un `int`. Por lo tanto, el siguiente código es incorrecto.

```cpp
int* p_num;
p_num = 23; // Error, esto asociando un puntero (direccion de memoria) a un int
```
¿Cómo se asigna por tanto un valor a un puntero? Hay que recordar que un puntero se asocia a una dirección de memoria, por lo tanto, se le debe asignar una dirección de memoria.

### Puntero a nullptr

La incialización más sencilla consiste en asignare un "no inicializado", es decir, indicar que no está asociado a **ninguna** dirección de memoria, se hace a través de la constante de C++ `nullptr`

```cpp
int * p_unNumero{nullptr};
```
o
```cpp
int * p_unNumero = nullptr;
```
o

```cpp
int * p_unNumero;
p = nullptr;
```
### Puntero a dirección de memoria 
Sin embargo, lo más habitual será asignarle una dirección de memoria en la que se almaenará el valor correspondiente. Para ello, C++ debe indicarle al sistema operativo que desea reservar un espacio en la memoria para el dato concreto, y asociará a la variable puntero, esa dirección de memoria. Se realiza mediante el operador `new`
```cpp
int * p_num{new int};
```
o 

```cpp
int * p_num = new int;
```

o

```cpp
int * p_num;
p_num = new int;
```

Haciendo esto se reserva un espacio en la memoria para albergar un int, y la dirección de ese espacio se asocial a la variable puntero `p_num`. De hecho, ¿qué pasa si mostramos por pantalla el valor de `p_num`?

```cpp
int * p_num{new int};
std::cout << p_num; 
```

Mostrará por pantalla una dirección de memoria en formato hexadecimal, por ejemplo `0x213ae70`. 

## Asociar un valor a un puntero
Una vez que se ha reservado la dirección de memoria para un puntero (con `new`) es posible asignar un valor a dicha dirección de memoria. Para ello se utiliza el operador _indirección_ `*`.

```cpp
int * p_num{new int};
*p_num = 23; // pongo 23 en la dirección de memoria donde apunta p_num 
std::cout << p_num; // 0x213ae70
std::cout << *p_num; // 23 . Muestra por pantalla el valor que hay en la memoria donde apunta p_num

```

## Liberando la memoria reservada para un puntero
En los punteros el programador indica al sistema operativo de modo explícito que desea reservar un espacio en la memoria (con `new`). Del mismo modo debe indicar esplícitamente que ya no desea seguir utilizando dicha memoria, en caso contrario la memoria no se liberará y podríamos agotar la memoria del sistema (*memory leak*).

Para liberar la memoria reservada a un puntero se usa `delete`

```cpp
  int * p_num{new int}; // se reserva la memoria
  *p_num = 23; // se guarda en memoria 23
  std::cout << *p_num << "\n";
  delete p_num;  // se libera la memoria
```

Ojo, una vez que la memoria ha sido liberada no se puede volver a asignar un valor al puntero, salvo que se realice una nueva reserva de memoria.

```cpp
  int * p_num{new int}; // se reserva la memoria
  *p_num = 23; // se guarda en memoria 23
  std::cout << *p_num << "\n";
  delete p_num;  // se libera la memoria
  std::cout << *p_num << "\n"; // EL PROGRAMA EXPLOTA
```

Se podría sin ningún problema volver a reservar memoria:

```cpp
  int * p_num{new int}; // se reserva la memoria
  *p_num = 23; // se guarda en memoria 23
  std::cout << *p_num << "\n"; // 23
  delete p_num;  // se libera la memoria
  ///
  ///
  ///
  p_num = new int;
  *p_num = 32;
  std::cout << *p_num << "\n"; // 32
  delete p_num;
```
 **Es muy importante** que se libere toda la memoria que ha sido reservada, un código como el siguiente puede agotar la memoria de nuestro ordenador.

 ```cpp
 int main() {
  int * p_num{new int}; // se reserva la memoria
  for(int i{0}; i < 1000 ; i++){
    p_num = new int;
    *p_num = i;
  }
}
```
Este programa reserva 1000 veces espacio para un `int` (sin liberarlo). Cada `int` ocupa 4 bytes, por lo que se están reservando 4000 bytes que no son liberados. Ojo, si este código se modificase del siguiente modo:

 ```cpp
 int main() {
  int * p_num{new int}; // se reserva la memoria
  for(int i{0}; i < 1000 ; i++){
    p_num = new int;
    *p_num = i;
  }
  delete p_num;
}
```

se liberaría SOLO el espacio del último puntero reservado (se liberan 4 bytes de los 4000 reservados).

En este caso, lo correcto sería:
 ```cpp
 int main() {
  int * p_num{new int}; // se reserva la memoria
  for(int i{0}; i < 1000 ; i++){
    p_num = new int;
    *p_num = i;
    delete p_num;
  }
  delete p_num;
}
```
(aunque este programa realmente no sirve para nada)

## Ejemplo de un vector de punteros

Imaginemos que tenemos una estrucutura en la que almacenamos la información de una persona 

```cpp
struct Person{
  std::string name;
  int age;
};
```
y queremos tener un vector de punteros a dicha estrcutra

```cpp
std::vector<Person*> personas;
```

Ojo, `personas` no es un puntero, sino un vector de punteros.

¿Cómo se podría rellenar el vector?

```cpp
#include <iostream>
#include <vector>

struct Person{
  std::string name;
  int age;
};

int main() {

  std::vector<Person*> people;
  char input{'a'};
  while(input != 'x'){
    std::cout<< "Introduce nombre: ";
    std::string name; std::cin >> name;
    std::cout << "Introduce edad: ";
    int age; std::cin >> age;
    Person* p = new Person;
    p->name = name;
    p->age = age;
    people.push_back(p);
    std::cout << "Introduce x para salir, otra tecla para continuar\n";
    std::cin >> input;
  }
  
}
```

Luego podríamos realizar una función `print` para mostrar por pantalla todos los valores.

```cpp
#include <iostream>
#include <vector>

struct Person{
  std::string name;
  int age;
};

void print(std::vector<Person*> list){
  for (auto p: list){
    std::cout << "nombre: " << p->name <<"\n";
    std::cout << "edad: " << p->age <<"\n";
  }
}

int main() {

  std::vector<Person*> people;
  char input{'a'};
  while(input != 'x'){
    std::cout<< "Introduce nombre: ";
    std::string name; std::cin >> name;
    std::cout << "Introduce edad: ";
    int age; std::cin >> age;
    Person* p = new Person;
    p->name = name;
    p->age = age;
    people.push_back(p);
    std::cout << "Introduce x para salir, otra tecla para continuar\n";
    std::cin >> input;
  }

  print(people);
  
}
```
Y finalmente, deberíamos borrar toda la memoria que hemos reservado:

```cpp
#include <iostream>
#include <vector>

struct Person{
  std::string name;
  int age;
};

void print(std::vector<Person*> list){
  for (auto p: list){
    std::cout << "nombre: " << p->name <<"\n";
    std::cout << "edad: " << p->age <<"\n";
  }
}

void clearMemory(std::vector<Person*> list){
  for (auto p: list){
    delete p; 
    p = nullptr;
  }
  list.resize(0);
}

int main() {

  std::vector<Person*> people;
  char input{'a'};
  while(input != 'x'){
    std::cout<< "Introduce nombre: ";
    std::string name; std::cin >> name;
    std::cout << "Introduce edad: ";
    int age; std::cin >> age;
    Person* p = new Person;
    p->name = name;
    p->age = age;
    people.push_back(p);
    std::cout << "Introduce x para salir, otra tecla para continuar\n";
    std::cin >> input;
  }

  print(people);
  clearMemory(people);
  
}
``` 

También se podría haber hecho utilizando programación funcional

```cpp
#include <iostream>
#include <vector>
#include <functional>

struct Person{
  std::string name;
  int age;
};


void forEach(std::vector<Person*> list, std::function<void (Person*)> op){
  for (auto p: list){
    op(p);
  }
}

int main() {

  std::vector<Person*> people;
  char input{'a'};
  while(input != 'x'){
    std::cout<< "Introduce nombre: ";
    std::string name; std::cin >> name;
    std::cout << "Introduce edad: ";
    int age; std::cin >> age;
    Person* p = new Person;
    p->name = name;
    p->age = age;
    people.push_back(p);
    std::cout << "Introduce x para salir, otra tecla para continuar\n";
    std::cin >> input;
  }

  // print
  forEach(people, [](Person* p)->void{
    std::cout << "Nombre: " << p->name << "\n";
    std::cout << "Nombre: " << p->age << "\n";
  });

  // clear memory
  forEach(people, [](Person* p)->void{
    delete p;
    p = nullptr;
  });

  people.resize(0);
  
}
``` 
