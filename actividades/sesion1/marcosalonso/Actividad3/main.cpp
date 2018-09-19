#include <iostream>
#include <locale>
using namespace std;

class Person{
public:
    //Constructor
    Person(string _name, short int _age, short int _height, short int _weight){
        name = _name;
        age = _age;
        height = _height;
        weigth = _weight;
    }
    //Attributes
    string name;
    short int age;
    short int height;
    short int weigth;
};

int main(){

    string name;
    short int age;
    short int height;
    short int weigth;
    cout << "Please, enter your name: ";
    cin >> name;
    cout << "Please, enter your age: ";
    cin >> age;
    if (age<= 0){ //the age must be between 1 and 149 years
        cout<<"Invalid age. You must be alive in order to use this program"<<endl;
        return 1;
    } else if (age >= 150){
        cout<<"Invalid age. You must be alive in order to use this program"<<endl;
        return 1;
    }
    cout << "Please, enter your heigth in cm: ";
    cin >> height;
    if (height<=20){ //the heigth must be between 20 a 300 cm
        cout<<"Woww I didn't know that Elves had computers"<<endl;
        return 2;
    } else if (height>=300){
        cout<<"Orcs must die!!"<<endl;
        return 2;
    }
    cout << "Please, enter your weigth in kg: ";
    cin >> weigth;


    Person p(name, age, height, weigth);
        cout << "Name: "<< p.name<< endl;
        cout << "Age: "<< p.age << endl;
        cout << "Height: "<< p.height <<endl;
        cout << "Weigth: "<< p.weigth <<endl;
}


