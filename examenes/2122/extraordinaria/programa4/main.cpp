#include <iostream>
#include <set>
using namespace std;

int main()
{
    string palabra1, palabra2;
    cout << "Introduce una palabra: "; cin >> palabra1;
    cout << "Introduce otra palabra: "; cin >> palabra2;

    set<char> repetidas;
    for(auto a: palabra1){
        for (auto b: palabra2){
            if(a == b) repetidas.insert(a);
        }
    }

    for(auto elem: repetidas) cout << elem << ", ";
    return 0;

}
