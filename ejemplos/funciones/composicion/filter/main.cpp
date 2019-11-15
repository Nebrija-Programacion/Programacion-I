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

  We will create a frist order functions: filter. It Will filter one vector returning a new vector with the filtered elements

  This function will be composed to the functions making the actual job (also called functors):
    - isEven: returns true when an int is even
    - isGreaterThanTen: returns true when an int is strictly greater than ten.

  Composing these functions with the first order function we get the desired result.

  For example:
    - filter(vector, isEven) will create a new vector with the even elements.

*******************************************************************************************/

#include <iostream>
#include <vector>
#include <functional>
using namespace std;

std::function<bool(int)> isEven = [](int x) {
    return (x % 2 == 0);
};

std::function<bool(int)> isGreaterThanTen = [](int x) {
    return (x > 10);
};

/**
 * FIRST ORDER FUNCTION
 * @brief filter function will return a new vector containin the values that fullfill fp function condition
 * @param v: The vector to filter. This vector remains unchanged.
 * @param fp: The function that filters de elements (returning boolean)
 * @return Filtered vector.
 */
vector<int> filter(vector<int> const &v, std::function<bool(int)> const &fp)
{
    vector<int> retVector;
    for (auto elem : v)
    {
        if (fp(elem))
            retVector.push_back(elem);
    }

    return retVector;
}

void print(vector<int> const &v)
{

    for (auto elem : v)
    {
        cout << elem << " - ";
    }
    cout << "\n";
}

int main()
{
    vector<int> myVector{{1, 20, 31, 42, 51}};

    cout << "Original vector:\n ";
    print(myVector);

    cout << "Filtered vector (isEven):\n ";
    vector<int> onlyEvenElements = filter(myVector, isEven);
    print(onlyEvenElements);

    cout << "Filtered vector (greaterThanTen)\n";
    vector<int> greaterThanTenVector = filter(myVector, isGreaterThanTen);
    print(greaterThanTenVector);

    cout << "End!" << endl;

    return 0;
}
