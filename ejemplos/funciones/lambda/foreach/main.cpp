/*
 * This file is part of the course "Programacion I" taught at Universidad Nebrija
 * https://github.com/Nebrija-Programacion/Programacion-I
 *
 * Copyright (c) 2019 Alberto Valero - https://github.com/avalero
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * See <http://www.gnu.org/licenses/>.
 */

/******************************************************************************************
  In this program we are creating a function that loops over a vector of integer and performs
  an action over each elemnt.

  This action is performed using a lambda function. The lambda functions receives a reference
  to a vector of integers, that will manipulate.
*******************************************************************************************/

#include <iostream>
#include <vector>
#include <functional>
using namespace std;

/**
 * @brief forEach Loops over each elemnt of v and performs fp
 * @param v the vector to loop
 * @param fp the actions that must be performed over each elemnt
 */
void forEach(vector<int> v, std::function<void(int elem)> fp){
    for(auto elem: v){
        fp(elem);
    }
}

int main()
{
    vector<int> v{{1,2,3,4,5,6}};
    vector<int> odds;

    // loop over each element of v and add odd elements to "odds" vector.
    forEach(v, [&odds](int e){
        if(e % 2 != 0) odds.push_back(e);
    });

    // loop over each elemnt of v and print it
    forEach(odds, [](int e){
        cout << e << endl;
    });

    return 0;
}
