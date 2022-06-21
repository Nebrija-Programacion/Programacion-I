#include <iostream>
#include <array>
#include <time.h>
#include <set>
#include <vector>

using namespace std;

int main()
{
    srand(time(NULL));
    array<int,10> arr;
    for(int i{0}; i < arr.size(); i++){
        arr.at(i) = 5 + rand() % 6;
    }

    set<int> mySet;
    for(auto elem: arr){
        cout << elem << ", ";
        mySet.insert(elem);
    }
    cout << "\n";

    vector<int> myVec;
    for(auto elem: mySet){
        cout << elem << ", ";
        myVec.push_back(elem);
    }
    cout << "\n";

    for(int i=myVec.size() -1; i>=0; i--){
        cout << myVec.at(i) << ", ";
    }
    cout << "\n";
    return 0;
}
