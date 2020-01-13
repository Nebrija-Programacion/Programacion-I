#include <iostream>
#include <string>
#include <vector>
std::vector<std::string> tokenize(std::string str, char c){
    std::vector<std::string> result;
    std::string cad{""};
    for(auto e: str){
        if(e == c){
            result.push_back(cad);
            cad="";
        }else{
            cad += e;
        }
    }
    if(cad != "") result.push_back(cad);

    return result;
}

std::string revert(std::string cad){
    std::string result{""};
    for(int i=cad.size()-1; i>=0; i--){
        result += cad.at(i);
    }

    return result;
}

void print(std::vector<std::string> v){
    for (auto cad:v){
        std::cout << cad << "-";
    }
    std::cout << "\n";
}

void print(std::string cad){
    std::cout << cad << "\n";
}

int main()
{

    std::string str = "como mola programar cuando sabes";
    auto tokenized = tokenize(str, 'a');
    print(tokenized);

    auto reverted = revert(str);
    print(reverted);

    return 0;
}
