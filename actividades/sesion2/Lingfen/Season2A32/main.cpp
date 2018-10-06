#include <iostream>

using namespace std;

int main()
{
    cout <<"These are the first twenty numbers of Fibonacci: " << endl;

    int num1=0,num2=1,total;

    cout<<num1<<endl;
    cout<<num2<<endl;

    for(int i=0;i<=20;i++)
    {
        total=num1+num2;
        num1=num2;
        num2=total;
        cout<<total<<endl;

    }
      return 0;
}
