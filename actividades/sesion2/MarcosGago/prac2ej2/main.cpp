#include <iostream>

using namespace std;
class Number{
    public:
    Number (float _num){
        num=_num;
    }
    float getNum(){
            return num;
        }
    float addTo(float otherNumb){
        return num+otherNumb;
    }
    float multiplyBy(float otherNum){
        return num*otherNum;
    }
    float divideBy(float otherNum){
        if (otherNum==0){
            throw string{"No se puede dividir entre 0"};
        }
        else{
            return num/otherNum;
        }
    }
    private:
        float num;
};

int main(){
    try {
        float num;
        cout<<"Introduce tu numero"<<endl;
        cin>>num;
        Number number(num);
        cout<<"Introduce el numero que vas a sumar al original"<<endl;
        float num1;
        cin>>num1;
        cout<<"El resultado es "<<number.addTo(num1)<<endl;
        cout<<"Introduce el numero que vas a multiplicar al original"<<endl;
        float num2;
        cin>>num2;
        cout<<"El resultado es "<<number.multiplyBy(num2)<<endl;
        cout<<"Introduce el numero que vas a dividir al original"<<endl;
        float num3;
        cin>>num3;
        cout<<"El resultado es "<<number.divideBy(num3)<<endl;
    } catch (string e) {
      cout<<e<<endl;
    }

}
