#include <iostream>

using namespace std;

class numeroComplejo{


    public:

    numeroComplejo (float r, float i){
        real_num = r;
        imaginario_num = i;
    }

    void addTo (float r, float i){
        real_num += r;
        imaginario_num += i;
    }

    void multipliesBy (float r, float i){
        real_num = real_num * r;
        imaginario_num = imaginario_num * i;
    }

    void getNumber (float & r, float & i){
        r = real_num;
        i = imaginario_num;
    }


    private:

    float real_num, imaginario_num;

};

int main (){

    numeroComplejo miComplejo {3,4};
    float real;
    float imaginario;

    miComplejo.addTo (2,3);

    miComplejo.getNumber (real, imaginario);
    cout << "El numero complejo es: " << real << " + " << imaginario << " i " << endl;

    miComplejo.multipliesBy (2,5);
    miComplejo.getNumber (real, imaginario);
    cout << "El numero complejo es: " << real << " + " << imaginario << " i " << endl;

    return 0;

}
