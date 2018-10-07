#include <iostream>

using namespace std;

class IntNumber{
    public:
    IntNumber (int _num){
        num=_num;
    }
    int getNum(){
            return num;
        }
    bool Prime(){
        if (num==0){
            cout<<num<<" es primo"<<endl;
        }
        else if (num==1){
            cout<<num<<" es primo"<<endl;
        }
        else if (num==2){
            cout<<num<<" es primo"<<endl;
        }
        else if (num==3){
            cout<<num<<" es primo"<<endl;
        }
        else {
        int n{2};
        while (n<=num/2){
            int f{num%n};
            if (f==0){
                cout<<num<<" no es primo"<<endl;
                return false;
            }
            else {
                n++;
            }
        }
        cout<<num<<" es primo"<<endl;
        return true;
        }
    }
    private:
        int num;
};

int main()
{
    int e;
    cout<<"Introduce tu numero"<<endl;
    cin>>e;
    IntNumber number(e);
    number.Prime();
    return 0;
}
