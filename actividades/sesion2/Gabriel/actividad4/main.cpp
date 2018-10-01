#include <iostream>

using namespace std;

int main()
{
    int a=0, i, number;

    cout << "Enter a score: ";
    cin >> number;

    for(i=1;i<(number+1);i++){
    if(number%i==0){
        a++;
        }
    }
    if(a!=2){
        cout << "Unfortunately that is not a prime number :(" << endl;
    }else{
        cout << "Yes, that is a prime number!" << endl;
    }
    return 0;
}
