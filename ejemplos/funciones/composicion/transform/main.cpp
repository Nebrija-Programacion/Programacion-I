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
  In this program we are showing how functions can be composed.
  We will create a frist order function transform that will transform a std::array

  The first order function will be composed to the functions making the actual job (also called functors):
    - makeDouble: multiplies an int per 2
    - makeTriple: multiplies an int per 3

  Composing these functions with the first order function we get the desired result.

  For example:
    - transform(vector, makeDouble) will transform vector elements, making them double.


*******************************************************************************************/

#include <iostream>
#include <array>
#include <functional>

using namespace std;

std::function<int(int)> makeDobule = [](int x) {
    return 2 * x;
};

std::function<int(int)> makeTriple = [](int x) {
    return 3 * x;
};

/**
 * FIRST ORDER FUNCTION
 * @brief transform a vector using fp function
 * @param v the vector to transform (this param will be modified and returned by reference)
 * @param fp: The function that modifies the elements (returning modified value - int )
 * @return the reference to the modified vector
 */
array<int, 5> &transform(array<int, 5> &v, std::function<int(int)> const &fp)
{
    for (auto &elem : v)
    {
        elem = fp(elem);
    }
    return v;
}

void print(array<int, 5> const &v)
{

    for (auto elem : v)
    {
        cout << elem << " - ";
    }
    cout << endl;
}

int main()
{
    array<int, 5> myArray{{1, 2, 3, 4, 5}};

    cout << "Original array: " << endl;
    print(myArray);

    cout << "Transform (makeDouble): " << endl;
    myArray = transform(myArray, makeDobule);
    print(myArray);

    cout << "Transform again (makeTriple): " << endl;
    myArray = transform(myArray, makeTriple);
    print(myArray);

    cout << "End!" << endl;

    return 0;
}
