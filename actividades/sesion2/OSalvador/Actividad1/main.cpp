#include <iostream>
 
using namespace std;

class Triangulo{
	
	public:
		Triangulo(int _base, int _altura){
			setBase(_base);
			setAltura(_altura);
		}
		
		int getBase(){
			return base;
		}
		
		int getAltura(){
			return altura;
		}
		
		int getAreat(){
			return base*altura/2;
		}
		
		//como el ejercicio no pide comprobación sobre los valores, no la incluyo
		void setBase(int _base){
			base = _base;
		}
		
		void setAltura(int _altura){
			altura = _altura;
		}
	
	private:
		int base;
		int altura;
};

class Rectangulo{
	
	public:
		Rectangulo(int _lado1, int _lado2){
			setLado1(_lado1);
			setLado2(_lado2);
		}
		
		int getLado1(){
			return lado1;
		}
		
		int getLado2(){
			return lado2;
		}
		
		int getArear(){
			return lado1*lado2;
		}
		
		int getPerim(){
			return lado1*2 + lado2*2;
		}
		
		//como el ejercicio no pide comprobación sobre los valores, no la incluyo
		void setLado1(int _lado1){
			lado1 = _lado1;
		}
		
		void setLado2(int _lado2){
			lado2 = _lado2;
		}
	
	private:
		int lado1;
		int lado2;
};

int main(){
	
	int base;
	cout << "Introduce base para un triangulo: " ;
	cin >> base;
	
	int altura;
	cout << "Introduce su altura: " ;
	cin >> altura;
	
	Triangulo egTriangulo(base, altura);
	cout << "El area del triangulo es: " << egTriangulo.getAreat() << endl;
	
	
	int lado1;
	cout << "Ahora introduce un lado de un rectangulo: " ;
	cin >> lado1;
	
	int lado2;
	cout << "Introduce el otro lado del rectangulo: " ;
	cin >> lado2;
	
	Rectangulo egRectangulo(lado1, lado2);
	cout << "El rectangulo de lados " << lado1 << " y " << lado2 << " tiene un area: " << egRectangulo.getArear() << " y un perimetro: " << egRectangulo.getPerim() << endl;

	
	return 0;
}



