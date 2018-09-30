#include <iostream>

 using namespace std;

 class WholeNumber{

 public:

    WholeNumber(int _num){
        num = _num;
    }

     int factorial(){
        int factorial {1};

        if (num <= 0){
            throw string{"ERROR: the number can not be less than or equal to 0 "};

        }else{

            for (int i{1}; i <= num; i++)
            factorial = factorial * i;
             }
        return factorial;
                    }

 private:
    int num;

};

 int main()
{
    int num;
     cout << "Enter the number: ";
    cin >> num;
     WholeNumber myNum{num};

     myNum.factorial();
     cout << "The result of the factorial is: " << myNum.factorial() << endl;

}
