#include <iostream>
using namespace std;
class Number{
public:
    Number(float _number){
        num = _number;
    }
    float getNum(){
        return num;
    }
    void add(float othernum){
        num = num + othernum;
    }
    void divideBy(float othernum){
        if (othernum == 0){
            throw string {"ERROR! You cannot divide by 0"};
        }else{
            num = num / othernum;
        }
    }
    void multiplyBy(float othernum){
        num = num * othernum;
    }
private:
    float num;
};
int main()
{
    float num;
    try{
    cout << "Enter a number: ";
    cin >> num;
    Number myNum(num);
    cout << "By what number do you want to divide it? ";
    cin >> num;
    myNum.divideBy(num);
    cout << "The result of the division is: " << myNum.getNum() << ", by what number do you want to multiply it? ";
    cin >> num;
    myNum.multiplyBy(num);
    cout << "The result of the multiplication is: " << myNum.getNum() << ", what number do you want to add? ";
    cin >> num;
    myNum.add(num);
    cout << "The result of the addition is: " << myNum.getNum(); cout << ". Have a nice day :)" << endl;
    }catch(string msg){
    cout << msg << endl;
    return 1;}
return 0;
}
