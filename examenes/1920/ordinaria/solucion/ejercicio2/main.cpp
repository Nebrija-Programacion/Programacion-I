#include <iostream>
#include <string>
#include <vector>


int count(std::string const & str, char c){
    int result{0};

    for(auto e: str){
        if(e == c){
            result++;
        }
    }

    return result;
}

std::vector<std::string> tokenize(std::string const & str, char c){
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

std::string revert(std::string const & cad){
    std::string result{""};
    for(int i=cad.size()-1; i>=0; i--){
        result += cad.at(i);
    }

    return result;
}

void print(std::vector<std::string> const & v){
    for (auto cad:v){
        std::cout << cad << "-";
    }
    std::cout << "\n";
}

void print(std::string const & cad){
    std::cout << cad << "\n";
}

int main()
{

    std::string str = "como mola programar cuando sabes";
    auto tokenized = tokenize(str, 'a');
    print(tokenized);

    auto reverted = revert(str);
    print(reverted);

    auto number = count(str, 'c');
    std::cout << number << "\n";


    return 0;
}
