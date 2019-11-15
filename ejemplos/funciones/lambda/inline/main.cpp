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
  (defining the functor in the parameter).
  getting the greatest flexibility (and readability)

*******************************************************************************************/

#include <iostream>
#include <vector>
#include <functional>
using namespace std;

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

/**
 * FIRST ORDER FUNCTION
 * @brief transform a vector using fp function
 * @param v the vector to transform (this param will be modified and returned by reference)
 * @param fp: The function that modifies the elements (returning modified value - int )
 * @return the reference to the modified vector
 */
vector<int> &transform(vector<int> &v, std::function<int(int)> const &fp)
{
    for (auto &elem : v)
    {
        elem = fp(elem);
    }
    return v;
}

void print(vector<int> const &v)
{

    for (auto elem : v)
    {
        cout << elem << " - ";
    }
    cout << endl;
}

int main()
{
    vector<int> myVector{{1, 21, 13, 42, 15}};

    cout << "Original Vector" << endl;
    print(myVector);

    cout << "Elements greater than 20" << endl;
    vector<int> greaterThan20 = filter(myVector, [](int a) { return a > 20; });
    print(greaterThan20);

    cout << "Original Vector (made triple)" << endl;
    myVector = transform(myVector, [](int a) { return a * 3; });
    print(myVector);

    cout << "End!" << endl;

    return 0;
}
