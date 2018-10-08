
# Actividad Clase - Sesión 4

## Programar un Vector3D

**¿Dónde consultar?** 
  - [Lección 2 - Mi Primera Clase](https://codebin.cc/2018/09/16/leccion-2-programando-la-primera-clase/)
  - [Lección 4 - Funciones Getter y Setter](https://codebin.cc/2018/09/23/leccion-4-funciones-getter-y-setter/)
  - [Lecciones 8 y 9 - Las funciones](https://codebin.cc/2018/10/07/leccion-8-las-funciones-i/)

### Paso I - Crea una clase Vector3D

Escribe una clase Vector3D que tenga:

 - Tres atributos privados x, y, z
 - Un constructor que inicialice los atributos x, y, z
 - Una función que devuelva los valores de x, y, z (utilizando parámetros por referencia).

Un ejemplo de función main sería:

    int main(){
		float x,y,z;
		Vector3D miVector{0,1,4};
		miVector.getCoordinates(x,y,z);
		cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
		return 0;
	}


### Paso II - Añadir algunas funciones a la clase Vector3D

 - Añadir una función pública a la clase que devuelva el módulo del vector
 - Añadir una función pública a la clase que realice el producto escalar de un número por el vector.

Un ejemplo de función main sería:

    int main(){
		float x,y,z;
		Vector3D miVector{0,1,4};
		miVector.getCoordinates(x,y,z);
		cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
		miVector.scalarMultiplyBy(3);
		miVector.getCoordinates(x,y,z);
		cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
		cout << "Modulo: " << miVector.module() << endl;
		return 0;
	}


### Paso III - Operaciones con otros vectores

Añadir otras funciones miembro:
  - multiplyBy, que multiplica por otro vector.
  - add, que le suma otro vector.
  
Un ejemplo de función main sería:

    int main(){
		float x,y,z;
		Vector3D miVector1{0,1,4};
		Vector3D miVector2{2,-1,4};
		Vector3D miVector3{0,1,2};

		miVector1.multiplyBy(miVector2);
		miVector1.getCoordinates(x,y,z);
		cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
		
		miVector1.add(miVector3);
		miVector1.getCoordinates(x,y,z);
		cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
		return 0;
	}

### Paso IV - Función Copia

Realizar una función que copia los valores de un vector en los de la clase. La funcion main quedaría del siguiente modo:

	int main(){
		Vector3D miVector;
		Vector3D otroVector{2,-1,4};
		miVector.copyFrom(otroVector);
		return 0;
	}

### Paso V - Programa final

Realizar un programa que realice los siguientes pasos:

 1. Pide las coordenadas de 3 vectores.
 2. Muestra el módulo de cada uno de los tres vectores.
 3. Muestra el resultado de multiplicar el primer vector por el segundo.
 4. Muestra el resultado de sumarle al vector 2 el vector 3.
