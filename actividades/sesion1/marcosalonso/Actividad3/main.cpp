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
    int validate(){
        if (age<= 0){ //the age must be between 1 and 149 years
            cout<<endl<<"Invalid age. You must be alive in order to use this program"<<endl;
        } else if (age >= 150){
            cout<<endl<<"Invalid age. You must be alive in order to use this program"<<endl;
        } else if (height<=20){ //the heigth must be between 20 a 300 cm
            cout<<endl<<"Woww I didn't know that Elves had computers"<<endl;
        } else if (height>=300){
            cout<<endl<<"Orcs must die!!"<<endl;
        }
        else {
            cout << "Name: "<< name<< endl;
            cout << "Age: "<< age << endl;
            cout << "Height: "<< height <<endl;
            cout << "Weigth: "<< weigth <<endl;
        }
        return 1;
    }
    void form(){
        cout << "Please, enter your name: ";
        cin >> name;
        cout << "Please, enter your age: ";
        cin >> age;
        cout << "Please, enter your heigth in cm: ";
        cin >> height;
        cout << "Please, enter your weigth in Kg: ";
        cin >> weigth;
    }


};

int main(){
    string name;
    short int age;
    short int height;
    short int weigth;
    Person p(name, age, height, weigth);
    p.form();
    p.validate();

    return 0;

}
