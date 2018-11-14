#include <iostream>

using namespace std;

class Tren{
public:
    Tren(int _business, int _economy, int _preciob, int _precioe){
        if(_business <= 0 || _economy <= 0 || _preciob <= 0 || _precioe <= 0){
            throw string("Error, los datos introducidos son incorrectos");
        }

        business = _business;
        economy = _economy;
        precio_business = _preciob;
        precio_economy = _precioe;
        ocupadas_business = ocupadas_economy = 0;
    }

    int getPlazasDisponiblesBusiness(){
        return business;
    }

    int getPlazasDisponiblesEconomy(){
        return economy;
    }

    int getOcupadasBusiness(){
        return ocupadas_business;
    }

    int getOcupadasEconomy(){
        return ocupadas_economy;
    }

    int getPrecioBusiness(){
        return precio_business;
    }

    int getPrecioEconomy(){
        return precio_economy;
    }

    int getRecaudacionMaxima(){
        return (business * precio_business + economy * precio_economy);
    }

    int getRecaudacion(){
        return (ocupadas_business * precio_business + ocupadas_economy * precio_economy);
    }

    bool reservaBusiness(int num){
        //Compruebo que hay suficientes plazas libres y que se quieren reservar > 0
        if((( ocupadas_business + num ) <= business) && ( num >= 0 )){
            ocupadas_business += num; //actualizao el numero de plazas ocupadas
            return true;
        }else{
            return false;
        }
    }

    bool reservaEconomy(int num){
        //Compruebo que hay suficientes plazas libres y que se quieren reservar > 0
        if((( ocupadas_economy + num ) <= economy) && ( num >= 0 )){
            ocupadas_economy += num; //actualizo el numero de plazas ocupadas
            return true;
        }else{
            return false;
        }
    }

private:
    int business, economy, precio_business, precio_economy,
    ocupadas_business, ocupadas_economy;


};


int main()
{
    int business, economy, precio_b, precio_e;
    try {
        cout << "Introduce el número de plazas business: ";
        cin >> business;
        cout << "Introduce el número de plazas economy: ";
        cin >> economy;
        cout << "Introduce el precio de plazas business: ";
        cin >> precio_b;
        cout << "Introduce el precio de plazas economy: ";
        cin >> precio_e;

        Tren ave{business,economy,precio_b, precio_e};

        cout << "=========================================================" << endl;
        cout << "Reacaudacion Maxima: " << ave.getRecaudacionMaxima() << endl;
        cout << "Plazas Business: " << ave.getPlazasDisponiblesBusiness() << endl;
        cout << "Precio Business: "<< ave.getPrecioBusiness() << endl;
        cout << "Plazas Economy " << ave.getPlazasDisponiblesEconomy() << endl;
        cout << "Precio Economy " << ave.getPrecioEconomy() << endl;
        cout << "=========================================================" << endl;

        int reserva;
        cout << "¿Cuántas plazas business deseas reservar? ";
        cin >> reserva;
        if(ave.reservaBusiness(reserva)){
            cout << "Reserva realizada con éxito" << endl;
        }else{
            cout << "No se ha podido realizar la reserva" << endl;
        }

        cout << "¿Cuántas plazas economy deseas reservar? ";
        cin >> reserva;
        if(ave.reservaEconomy(reserva)){
            cout << "Reserva realizada con éxito" << endl;
        }else{
            cout << "No se ha podido realizar la reserva" << endl;
        }

        cout << "Recaudacion total: " << ave.getRecaudacion() << endl;

    } catch (string e) {
        cout << e << endl;
        return 1;
    }
    return 0;
}
