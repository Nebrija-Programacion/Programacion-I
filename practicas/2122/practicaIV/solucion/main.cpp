#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


vector<float> producto(float n, vector<float> const & a){
    vector<float> r;
    for(auto elem: a){
        r.push_back(n*elem);
    }
    return r;
}


vector<float> negativo(vector<float> const & a){
    return producto(-1, a);
}

vector<float> suma(vector<float> const & a, vector<float> const & b){
    vector<float> r;
    if(a.size() != b.size()) return r;
    for(int i{0}; i<a.size(); i++){
        r.push_back(a.at(i)+ b.at(i));
    }
    return r;
}

float producto_escalar(vector<float> const & a, vector<float> const & b){
    float r{0};
    if(a.size() != b.size()) return -9999;
    for(int i{0}; i<a.size(); i++){
        r+=a.at(i)* b.at(i);
    }
    return r;
}

float modulo(vector<float> const & a){
    return sqrt(producto_escalar(a,a));
}

int main()
{
    vector<float> va, vb;
    std::cout << "Introduce tamaño de los vectores: ";
    int n; cin >> n;
    for(int i{0}; i<n; i++){
        cout << "Introduce el elemento " << i << " del primer vector: ";
        float aux; cin >> aux; va.push_back(aux);
        cout << "Introduce el elemento " << i << " del segundo vector: ";
        cin >> aux; vb.push_back(aux);
    }

    std::cout << "La suma de ambos es: ";
    cout << "[";
    for(auto elem: suma(va,vb)){
        cout << elem << ", ";
    }
    cout << "]\n";

    std::cout << "La resta de ambos es: ";
    cout << "[";
    for(auto elem: suma(va,negativo(vb))){
        cout << elem << ", ";
    }
    cout << "]\n";


    std::cout << "El primero por 3 es: ";
    cout << "[";
    for(auto elem: producto(3,va)){
        cout << elem << ", ";
    }
    cout << "]\n";

    std::cout << "El modulo del primero es " << modulo(va) << "\n";

    return 0;
}
