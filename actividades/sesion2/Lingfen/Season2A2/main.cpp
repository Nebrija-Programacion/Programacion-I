#include <iostream>

 using namespace std;

 class Number{

 public:
     Number(float _number){
        number = _number;
    }
     float getNumber(){
        return number;

    }
     void divideBy(float otherNumber){
        if (otherNumber <= 0){
            throw string {"ERROR: Can not divide by 0"};

        }else{

            number = number/otherNumber;
        }
    }
     void multiplyBy(float otherNumber){
        number = number * otherNumber;
    }
     void addTo(float otherNumber){
        number = number + otherNumber;
    }

 private:
    float number;
};

 int main()
{
    try{
    float num;

     cout << "Enter a number: " << endl;
    cin >> num;

     Number myNum{num};
     cout << "Enter the number you want to divide by: " << endl;
    cin >> num;
     myNum.divideBy(num);

     cout << "The result of the divide is: " << myNum.getNumber() << endl << endl;

     cout << "Enter a number you want to multiply: " << endl;
    cin >> num;
     myNum.multiplyBy(num);

     cout << "The result of the multiply is: " << myNum.getNumber() << endl << endl;

     cout << "Enter a number you want to add: " << endl;
    cin >> num;
     myNum.addTo(num);

     cout << "The result of the add is: " << myNum.getNumber() << endl;

       }catch(string e){
        cout << e << endl;
                     }
}
