#include <iostream>
#include <vector>
#include <functional>

using namespace std;

vector<string> splitWords(string const & f){
    vector<string> r;
    string w{""};
    for(auto l: f){
        if(l != ' ') w+=l;
        else{
            r.push_back(w);
            w.clear();
        }
    }
    if(w!=" ") r.push_back(w);

    return r;
}

void forEach(vector<string> const & v, function<void(string const &)> const & f){
    for(auto elem:v) f(elem);
}

vector<string> filter(vector<string> const & v, function<bool(string const &)> const & f){
    vector<string> r;
    for(auto elem:v) if(f(elem)) r.push_back(elem);
    return r;
}

vector<string> map(vector<string> const & v, function<string(string const &)> const & f){
    vector<string> r;
    for(auto elem:v) r.push_back(f(elem));
    return r;
}

string find(vector<string> const & v, function<bool(string const &)> const & f){
    for(auto elem:v) if(f(elem)) return elem;
    return "";
}

int main()
{
    // ejercicio 1
    cout << "Introduce una frase: " << endl;
    string w{""};
    getline(cin, w);

    // ejercicio 2
    auto words = splitWords(w);
    forEach(words, [](string const & w){cout << w << "-";});
    cout << "\n\n";

    // ejercicio 3
    auto ejer3 = filter(words, [](string const & w){ return (w.length() > 5 && w.length() < 10); } );
    forEach(ejer3, [](string const & w){cout << w << "-";});
    cout << "\n\n";

    // ejercicio 4
    auto ejer4 = map(ejer3, [](string const & w){
            string r{""};
            for(int i{0}; i < w.length(); i++){
                if(w.at(i) == 'a' || w.at(i) == 'e' || w.at(i) == 'o') r += 'i';
                else r+=w.at(i);
            }
            return r;
        });

    forEach(ejer4, [](string const & w){cout << w << "-";});
    cout << "\n\n";

    // ejercicio 5

    forEach(ejer4, [](string const & w){if(w.length()> 0 && w.at(0) != 'a' && w.at(0) != 'e' && w.at(0) != 'i' && w.at(0) != 'o' && w.at(0) != 'u') cout << w << "-";});
    cout << "\n\n";

    // ejercicio 6 y 7
    auto ejer6 = find(words, [](string const & w){ return (w.length() > 4); } );
    cout << ejer6 << "\n\n";



    return 0;
}
