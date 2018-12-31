#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;

class Evento{
public:
    Evento(int _dia, int _mes, int _ano, string _descripcion){
        //comprobar si la fecha es correcta. Si no, lanzar excepcion.
        if(!esFechaCorrecta(_dia, _mes, _ano)){
            throw string{"La fecha introducida no es correcta"};
        }

        dia = _dia;
        mes = _mes;
        ano = _ano;
        descripcion = _descripcion;

    }

    bool isDate(int d, int m, int a){
        return (d == dia && m == mes && a == ano);
    }

    bool isAfter(int d, int m, int a){
        int current = dia + mes*31 + ano*12*31; // dias pasados desde el ano 0
        int param = d + m*31 + a*12*31;

        return (param > current);
    }

    bool isBefore(int d, int m, int a){
        int current = dia + mes*31 + ano*12*31; // dias pasados desde el ano 0
        int param = d + m*31 + a*12*31;

        return (param < current);
    }

    string getDescription(){
        return descripcion;
    }

    void print(){
        cout << "Fecha: " << dia << "/" << mes << "/" << ano << endl;
        cout << "Descripcion: " << descripcion << endl;
    }

private:
    bool esFechaCorrecta(int _dia, int _mes, int _ano){
        if(_mes < 1 || _mes > 12) return false; //mes no existente
        if(_ano < 2019) return false; // ano pasado
        if(_dia < 1 || _dia > 31) return false; // no may meses con mas de 31 dias ni menos de 1
        array<int, 5> meses30{{2,4,6,8,11}}; // los meses con 30 dias
        if( find(meses30.begin(), meses30.end(), _mes) && _dia > 30 ) return false; // mas de 30 dias
        if( esBisiesto(_ano) && _dia > 29) return false; //bisiesto y mas de 29
        if( _mes == 2 && _dia > 28 ) return false; // febrero y mas de 28 dias
        return true;
    }

    bool esBisiesto(int _ano){
        return (_ano % 4 == 0 && (_ano % 100 != 0 || _ano % 400 == 0));
    }

    int mes,dia,ano;
    string descripcion;
};

class Agenda{
public:
    // constructor sin parámetros
    Agenda(){}

    // constructor que incluye lista inicial de eventos
    Agenda(vector<Evento> e){
        eventos = e;
    }

    void addEvento(Evento e){
        eventos.push_back(e);
    }

    vector<Evento> findByDate(int d, int m, int a){
        vector<Evento> resultado;
        // recorre todos los eventos y anade al resultados aquellos que coinciden en fecha
        for (auto e: eventos){
            if(e.isDate(d,m,a)) resultado.push_back(e);
        }
        return resultado;
    }

    vector<Evento> findByRange(int d0, int m0, int a0, int d1, int m1, int a1){
        vector<Evento> resultado;
        // recorre todos los eventos y anade al resultados en rango
        for (auto e: eventos){
            if(e.isAfter(d0,m0,a0) && e.isBefore(d1,m1,a1)) resultado.push_back(e);
        }
        return resultado;
    }

    void print(){
        for(auto e: eventos){
            cout << "-----------------------------------" << endl;
            e.print();
        }
    }

private:
    vector<Evento> eventos;
};

int main()
{

    Agenda agenda;

    char c='x';

    while(c != 's'){
        cout << "Que deseas hacer?" << endl;
        cout << "============================" << endl;
        cout << "a: Anadir evento" << endl;
        cout << "c: Consultar eventos de una fecha" << endl;
        cout << "r: Consultar eventos en rango de fechas" << endl;
        cout << "s: Salir" << endl;
        cout << "============================" << endl;
        cout << "Introduce tu opcion: ";
        cin >> c;
        //comprueba si se ha metido un caracter
        if(cin.fail()){
            cin.ignore();
            continue; //repeat while loop
        }
        switch(c){
        case 'a':
        {
            int d,m,a;
            string desc;
            cout << "Introduce el dia (1-31): "; cin >> d; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}
            cout << "Introduce el mes (1-12): "; cin >> m; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}
            cout << "Introduce el ano (2019-...): "; cin >> a; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}
            cout << "Introduce la descripcion: "; cin >> desc;
            Evento e{d,m,a,desc};
            agenda.addEvento(e);
            break;
        }
        case 'c':
        {
            int d,m,a;
            string desc;
            cout << "Introduce el dia (1-31): "; cin >> d; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}
            cout << "Introduce el mes (1-12): "; cin >> m; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}
            cout << "Introduce el ano (2019-...): "; cin >> a; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}
            vector<Evento> resultado = agenda.findByDate(d,m,a);
            Agenda agendaDia{resultado};
            cout << endl << endl;
            cout << "==================================" << endl;
            agendaDia.print();
            cout << "==================================" << endl;
            break;
        }
        case 'r':
        {
            int d0,m0,a0,d1,m1,a1;
            string desc;
            cout << "Introduce el dia inical (1-31): "; cin >> d0; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}
            cout << "Introduce el mes inicial (1-12): "; cin >> m0; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}
            cout << "Introduce el ano inicial (2019-...): "; cin >> a0; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}

            cout << "Introduce el dia final (1-31): "; cin >> d1; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}
            cout << "Introduce el mes final (1-12): "; cin >> m1; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}
            cout << "Introduce el ano final (2019-...): "; cin >> a1; if (cin.fail()){cout << "Error" << endl; cin.ignore(); continue;}


            vector<Evento> resultado = agenda.findByRange(d0, m0, a0, d1, m1, a1);
            Agenda agendaDia{resultado};
            cout << endl << endl;
            cout << "==================================" << endl;
            agendaDia.print();
            cout << "==================================" << endl;
            break;
        }
        case 's':
            cout << "Adios. " << endl;
            break;
        default:
            cout << "Introduce una opción valida." << endl << endl;
        }
    }
    return 0;
}
