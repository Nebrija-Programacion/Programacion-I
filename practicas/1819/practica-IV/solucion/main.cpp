#include <iostream>
#include <vector>
#include <climits>

using namespace std;



class Jugador{
public:
    Jugador(int dinero_ini, string _nombre){
        if(dinero_ini <=0){
            throw string{"Dinero inicial incorrect"};
        }

        dinero = dinero_ini;
        nombre = _nombre;
        apuesta = 0;
        numero = 0;
        numeroAcumulado = 0;
        activo = true;
    }

    void apostar(int d){
        if(d < 0) throw string{"No puedes apostar una cantidad negativa"};
        if(d > dinero) throw string{"No tienes dinero suficiente para apostar"};
        apuesta = d;
        dinero -= apuesta;
    }

    void numApostado(int n){
        if(n < 2 || n > 12) throw string{"No puedes apostar a ese numero"};
        numero = n;
    }


    unsigned short int lanzarDado(){
        return rand() % 6 + 1;
    }

    void lanzarDados(unsigned short int & dado1, unsigned short int & dado2){
        dado1 = lanzarDado();
        dado2 = lanzarDado();
        numeroAcumulado = numeroAcumulado + dado1 + dado2;
    }

    int getNumeroAcumulado(){
        return numeroAcumulado;
    }

    string getNombre(){
        return nombre;
    }

    void retirarse(){
        activo = false;
    }

    bool isActivo(){
        return ( activo && (numeroAcumulado <= 21) );
    }

    int puntuacion(){
        if(numeroAcumulado > 21) return INT_MAX;
        return (21 - numeroAcumulado);
    }

    bool tieneDinero(){
        return dinero > 0;
    }

private:
    string nombre;
    int dinero;
    int apuesta;
    int numero;
    int numeroAcumulado;
    bool activo;
};




int main()
{
    vector<Jugador> jugadores;
    bool error{true};
    //Configuracion partida
    while(error){
        try{
            unsigned short int n{0};
            while(n == 0){
                cout << "Cuantos jugadores vara particiar? (2 - 4): ";
                cin >> n;
                if(cin.fail()){
                    cin.ignore();
                    cout << "Un numero entre 2 y 4 por favor" << endl;
                    n = 0;
                }

                if(n<2 || n>4){
                    cout << "Un numero entre 2 y 4 por favor" << endl;
                    n = 0;
                }

                for(int i=0; i<n; i++){
                    cout << "Datos Jugador " << i << ":"<<endl;
                    cout << "Como te llamas?: ";
                    string nombre{""};
                    int dinero{0};
                    while(nombre==""){
                        cin >> nombre;
                        if(cin.fail()){
                            cin.ignore();
                            cout << "Melon, mete tu nombre bien. Como te llamas?: ";
                            nombre = "";
                        }
                    }

                    while(dinero==0){
                        cout << "Cuanto dinero tienes?: ";
                        cin >> dinero;
                        if(cin.fail()){
                            cin.ignore();
                            cout << "Mete el dinero que tienes por favor: ";
                            dinero = 0;
                        }
                        if(dinero < 0){
                            cout << "Mete el dinero que tienes por favor: ";
                            dinero = 0;
                        }
                    }

                    Jugador jugador{dinero, nombre};
                    jugadores.push_back(jugador);
                }
            }
            error = false;
        }catch(string e){
            cout << e << endl;
            error = true;
        }
    }

    try{
        // PARTIDA

        // Mientras haya jugadores
        bool finPartida = false;
        while(!finPartida){
            cout << "Empezamos nueva partida... " << endl;
            finPartida = true;
            for(auto & jugador:jugadores){
                if(jugador.tieneDinero()){
                    cout << jugador.getNombre() << " cuanto apuestas?: " << endl;
                    int dinero;
                    cin >> dinero;
                    if(cin.fail()){
                        cin.ignore();
                        cout << "No puedes apostar esa cantidad. Eliminado por tonto" << endl;
                        jugador.retirarse();
                    }
                    jugador.apostar(dinero);
                    finPartida = false;

                }else{
                    jugador.retirarse();
                }
            }


            unsigned short jugadores_activos = jugadores.size();

            // TIRAMOS LOS DADOS MIENTRAS HAYA JUGADORES ACTIVOS

            while(jugadores_activos > 1){
                jugadores_activos = 0;
                for(auto & jugador:jugadores){
                    if(jugador.isActivo()){
                        jugadores_activos++;
                        cout << jugador.getNombre() << " tira los dados..." << endl;
                        unsigned short dado1, dado2;
                        jugador.lanzarDados(dado1, dado2);
                        cout << jugador.getNombre() << " has sacado " << dado1 << " y " << dado2 << endl;
                        cout << "Tu suma acumulada es " << jugador.getNumeroAcumulado() << endl;
                        cout << "Te plantas? Si (s)" << endl;
                        char k; cin >> k; if(cin.fail()) cin.ignore();
                        if(k == 's') jugador.retirarse();
                    }
                }
            }

            // ACABA LA PARTIDA, VEMOS QUIEN HA GANADO

            int puntos = INT_MAX;
            string ganador;
            for(auto & jugador: jugadores){
                if(jugador.puntuacion() < puntos){
                    ganador = jugador.getNombre();
                    puntos = jugador.puntuacion();
                }
            }
            if(puntos == INT_MAX) cout << "Os habéis pasado todos" << endl;
            else cout << ganador << " ha ganado" << endl;
        }
    }catch(string e){
        cout << e << endl;
    }
    return 0;
}

