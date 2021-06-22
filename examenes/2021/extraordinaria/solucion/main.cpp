#include <iostream>
#include <vector>
#include <set>

using namespace std;

/****************************************
 ************  Ejercicio 1 **************
 ****************************************/

vector<char> commonChars(string const & s1, string const & s2){
    set<char> charSet;
    for(char c1: s1){
        for(char c2: s2){
            if(c1 == c2) charSet.insert(c1);
        }
    }

    vector<char> result;
    for(auto c: charSet){
        result.push_back(c);
    }

    return result;
}

/****************************************
 ************  Ejercicio 2 **************
 ****************************************/

vector<string> getWords(string const & s){
    string singleWord{""};
    vector<string> result;
    for(char c: s){
        if(c == ' ' && !singleWord.empty()){
            result.push_back(singleWord);
            singleWord.clear();
        }else{
            singleWord.push_back(c);
        }
    }
    if(!singleWord.empty()){
        result.push_back(singleWord);
    }

    return result;
}

vector<string> commonWords(string const & s1, string const & s2){
    auto wv1 = getWords(s1);
    auto wv2 = getWords(s2);

    set<string> wordSet;
    for(string w1: wv1){
        for(string w2: wv2){
            if(w1 == w2) wordSet.insert(w1);
        }
    }

    vector<string> result;
    for(auto w: wordSet){
        result.push_back(w);
    }

    return result;
}

/****************************************
 ************  Ejercicio 3 **************
 ****************************************/

struct CharStats{
    char ch;
    double percentage;
};

CharStats presentChars(string const & s){
    int pointCount{0};
    int commaCount{0};
    int twoPointsCount{0};
    int exclamationCount{0};
    int interrogationCount{0};

    for(auto c: s){
        if(c == '.') pointCount++;
        else if(c == ',') commaCount++;
        else if(c == ':') twoPointsCount++;
        else if(c == '!') exclamationCount++;
        else if(c == '?') interrogationCount++;
    }

    int totalSize = s.length();

    double pointPercentage = double(pointCount)/totalSize * 100;
    double commaPercentage = double(commaCount)/totalSize  * 100;
    double twoPointsPercentage = double(twoPointsCount)/totalSize * 100;
    double exclamationPercentage = double(exclamationCount)/totalSize * 100;
    double interrogationPercentage = double(interrogationCount)/totalSize * 100;


    cout << "El punto aparece " << pointCount << " veces. Un " << pointPercentage << "% del total \n";
    cout << "La coma aparece " << commaCount << " veces. Un " << commaPercentage << "% del total \n";
    cout << "Los dos puntos aparecen " << twoPointsCount << " veces. Un " << twoPointsPercentage << "% del total \n";
    cout << "La exclamación aparece " << exclamationCount << " veces. Un " << exclamationPercentage << "% del total \n";
    cout << "La interrogación aparece " << interrogationCount << " veces. Un " << interrogationPercentage << "% del total \n";

    CharStats result{'.',pointPercentage};
    if(result.percentage < commaPercentage) result = CharStats{',', commaPercentage};
    if(result.percentage < twoPointsPercentage) result = CharStats{':', twoPointsPercentage};
    if(result.percentage < exclamationPercentage) result = CharStats{'!', exclamationPercentage};
    if(result.percentage < interrogationPercentage) result = CharStats{'?', interrogationPercentage};

    return result;

}


int main()
{
    string s1 = "Hola, soy Alberto! ¿y tu?";
    string s2 = "soy el profesor de Programacion";

    // ejercicio 1
    auto ejer1 = commonChars(s1, s2);
    for(auto c: ejer1) std::cout << c << " - ";

    cout << endl;

    // ejercicio 2
    auto words = getWords(s1);
    for(auto s: words) std::cout << s << " - ";

    cout << endl;

    // ejercicio 3;
    auto ejer3 = presentChars(s1);

    std::cout << "El caracter con mayor presencia es " << ejer3.ch <<" Aparece un " << ejer3.percentage << "%\n";

    return 0;
}
