#include <iostream>

using namespace std;

class Number{
    public:
    Number (int _num){
        num=_num;
    }
    int getNum(){
            return num;
 }
    int Factorial(){
        if (num<=0){
            throw string{"Debe ser mayor que 0"};
        }
        else {
            for (int cont{num-1}; cont>=1; cont--){
                num=num*cont;
            }
            return num;
        }
    }

    private:
        int num;
};
void Fib(){
int fib[20];
fib[0]=1;
fib[1]=1;
cout<<"Los 20 primeros elementos de la serie de Fibonacci son: "<<endl;
cout<<fib[0]<<endl;
cout<<fib[1]<<endl;
for (int m{2}; m<=19; m++){
    fib[m]=fib[m-1]+fib[m-2];
    cout<<fib[m]<<endl;
}
}
    int main(){
        try{
            cout<<"Introduce un numero"<<endl;
            int num;
            cin>>num;
            Number number(num);
            cout << "El factorial es: "<<number.Factorial()<<endl;
            Fib();
            return 0;
        }catch (string e){
            cout<<e<<endl;
            return 1;
        }


    }
