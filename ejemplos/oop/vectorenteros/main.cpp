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

#include <iostream>
#include <vector>
#include <functional>

#include "vectorint.h"

using namespace std;


auto print = [](int elem){
    cout << elem << ", " ;
};

int main()
{
    VectorInt myVector({1,2,3,4,5,6,7});

    // print all memberes of vector using forEach method and print lambda function
    myVector.forEach(print);
    cout << endl;

    // find index of 3 element
    int index = myVector.find([](int elem){
        return elem == 3;
    });

    cout << "3 found at position " << index << endl;

    // make a vector with 2*elems of myVector
    VectorInt doubleVector = myVector.map([](int elem){
        return elem*2;
    });

    //print it
    doubleVector.forEach(print);
    cout << endl;

    // make a vector only with even numbers
    VectorInt evenVector = myVector.filter([](int elem){
        return (elem % 2 == 0);
    });
    // print it
    evenVector.forEach(print);
    cout << endl;

    // use forEach to add elements to newVector which are multiples of 3
    VectorInt newVector({1,2,3});
    myVector.forEach([&newVector](int elem){
        if(elem % 3 == 0) newVector.push(elem);
    });

    newVector.forEach(print);
    cout << endl;

    return 0;
}
