#include <iostream>
#include <math.h> 
 
using namespace std;

class Vector3D{
	
	private:
		float x,y,z;
		float a,b,c;
	
	public:
		Vector3D(float _x, float _y, float _z){	
			x = _x;
			y = _y;
			z = _z;
	}
	
	void getCoordinates(float &a, float &b, float &c){
		a = x;
		b = y;
		c = z;
	}
	
	//no dar valores de las coordenadas, llamar al vector
	void scalarMultiplyBy(float num){
		//x* = num es un atajo de x = x * num
		x*= num;
		y*= num;
		z*= num;
	}
	
	//no estoy seguro de que el resultado del modulo sea correcto, pero la formula parece estar bien
	float module(){
		return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	}
	

	    void add (Vector3D a ){
        x = x + a.x;
        y = y + a.y;
        z = z + a.z;
    }
    void vectorMultiplyBy (Vector3D a ){
        x = x * a.x;
        y = y * a.y;
		z = z * a.z;
	}

};
		
int main(){
	
	//declaracion de vectores y modulo
		float x,y,z;
		cout << "Introduce las coordenadas un primer vector: " << endl;
		cin >> x >> y >> z;
		
		Vector3D VectorUno(x,y,z);
		
		VectorUno.getCoordinates(x,y,z);
		cout << "El primer vector tiene coordenadas "<< "x: " << x << ", y: " << y << ", z: " << z << endl;
		cout << "El modulo del vector vale: " << VectorUno.module() << endl;
		
		float operador;
		cout << "Por que numero quieres multiplicar tu vector?" << endl;
		cin >> operador;
		cout << "El resultado es: " << endl;
		VectorUno.scalarMultiplyBy(operador);
		
		//getCoordinates lo que hace es sobreescribir los valores de x,y,z con los x,y,z del vector
		VectorUno.getCoordinates(x,y,z);
		cout << "x: " << x << ", y: " << y << ", z: " << z << endl << endl;
		
		
		cout << "Introduce las coordernadas de un segundo vector por el que multiplicar al primero: " << endl;
		cin >> x >> y >> z;
		
		Vector3D VectorDos(x,y,z);
		
		VectorDos.getCoordinates(x,y,z);
		cout << "Las coordenadas del segundo vector valen "<< "x: " << x << ", y: " << y << ", z: " << z << endl;
		cout << "El modulo del segundo vector vale: " << VectorDos.module() << endl;
		
		
		cout << "Introduce las coordernadas de un tercer vector que suma al segundo: " << endl;
		cin >> x >> y >> z;
		
		Vector3D VectorTres(x,y,z);
		
		VectorTres.getCoordinates(x,y,z);
		cout << "Las coordenadas del tercer vector valen "<< "x: " << x << ", y: " << y << ", z: " << z << endl;
		cout << "El modulo del tercer vector vale: " << VectorTres.module() << endl;
	
	//operaciones de vectores
		VectorUno.vectorMultiplyBy(VectorDos);
	    VectorUno.getCoordinates(x,y,z);
	
		cout << "El producto del primer y segundo vectores es el vector de coordenadas x: " << x << ", y:" << y << ", z:" << z << endl;
		
		VectorDos.add(VectorTres);
	    VectorDos.getCoordinates(x,y,z);
	
		cout << "La suma del segundo y tercer vectores es el vector de coordenadas x: " << x << ", y: " << y << ", z: " << z << endl;
	
	return 0;
}
