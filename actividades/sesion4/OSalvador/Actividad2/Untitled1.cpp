#include <iostream>
#include <math.h> 
 
using namespace std;

class NumeroComplejo{
	
	private:
		float parte_real, parte_imaginaria;
		float rn, in;
	
	public:
		NumeroComplejo(float _parte_real, float _parte_imaginaria){	
			parte_real = _parte_real;
			parte_imaginaria = _parte_imaginaria;
	}
	
	//no entiendo "que realice la suma de la parte real e imaginaria por el número complejo" continuo suponiendo que signofica con el numero complejo
	//rn e in son la parte real e imaginaria nuevas
	void sumar(float rn, float in){
		parte_real = parte_real + rn;
		parte_imaginaria = parte_imaginaria +in;
	}

	void multiplicarPor(float rn, float in){
		parte_real = parte_real * rn;
		parte_imaginaria = parte_imaginaria * in;
	}
	
	void getNumero(float &rn, float &in){
		rn = parte_real;
		in = parte_imaginaria;
	}
};


int main(){
  NumeroComplejo miComplejo(3,4);
   
  float parte_real, parte_imaginaria;
 
  miComplejo.sumar(2,3);
  miComplejo.getNumero(parte_real, parte_imaginaria);
  cout << "El numero complejo es " << parte_real << " + " << parte_imaginaria << " * i" << endl;
 
  miComplejo.multiplicarPor(2,5);
  miComplejo.getNumero(parte_real, parte_imaginaria);
  cout << "El numero complejo es " << parte_real << " + " << parte_imaginaria << " * i" << endl;
 
  return 0;
}   
