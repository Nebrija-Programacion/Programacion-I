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
  In this program we are showing how functions can be composed inline
  (defining the matching function in the parameter).
  getting the greatest flexibility (and readability)

*******************************************************************************************/

#include <iostream>
#include <vector>
#include <functional>
using namespace std;

/**
 * FIRST ORDER FUNCTION
 * @brief returns if a vector contains an element
 * @param v: The vector to search. This vector remains unchanged.
 * @param fp: The function that matches the condition (returning boolean)
 * @return true if the element is found
 */
int contains(vector<int> const &v, std::function<bool(int)> fp)
{
    for (auto elem : v)
    {
        if (fp(elem))
            return true;
    }

    return false;
}

int main()
{
    vector<int> myVector{{1, 21, 13, 42, 15}};

    // look for number 21
    if (contains(myVector, [](int a) { return a == 21; }))
    {
        cout << "21 found!" << endl;
    }
    else
    {
        cout << "21 not found" << endl;
    }

    // look for number 3
    if (contains(myVector, [](int a) { return a == 3; }))
    {
        cout << "3 Found!" << endl;
    }
    else
    {
        cout << "3 not found" << endl;
    }

    cout << "End!" << endl;

    return 0;
}
