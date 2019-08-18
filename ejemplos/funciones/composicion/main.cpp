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
  We will create two frist order functions
    - filter: Will filter one vector returning a new vector with the filtered elements
    - transform: Will transform a vector.

  Both functions will be composed to the functions making the actual job (also called functors):
    - makeDouble: multiplies an int per 2
    - makeTrible: multiplies an int per 3
    - isEven: returns true when an int is even
    - isGreaterThanTen: returns true when an int is strictly greater than ten.

  Composing these functions with the first order function we get the desired result.

  For example:
    - filter(vector, isEven) will create a new vector with the even elements.
    - transform(vector, makeDouble) will transform vector elements, making them double.

  Finally we will define the functor inside the parameter list,
  getting the greatest flexibility (and readability)

*******************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;



int makeDobule(int x){
    return 2*x;
}

int makeTriple(int x){
    return 3*x;
}

bool isEven(int x){
    return (x % 2 == 0);
}

bool isGreaterThanTen(int x){
    return (x > 10);
}


/**
 * FIRST ORDER FUNCTION
 * @brief filter function will return a new vector containin the values that fullfill fp function condition
 * @param v: The vector to filter. This vector remains unchanged.
 * @param fp: The function that filters de elements (returning boolean)
 * @return Filtered vector.
 */
vector<int> filter(vector<int> const & v, bool (*fp)(int)){
    vector<int> retVector;
    for(auto elem: v){
        if(fp(elem)) retVector.push_back(elem);
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
vector<int> & transform(vector<int> & v, int (*fp)(int)){
    for(auto& elem: v){
        elem = fp(elem);
    }
    return v;
}

void print(vector<int> const & v){

    for(auto elem: v){
        cout << elem << " - ";
    }
    cout << endl;
}

int main()
{
    vector<int> myVector{{1,2,3,4,5}};

    cout << "Original vector: " << endl;
    print(myVector);

    cout << "Filtered vector (isEven): " << endl;
    vector<int> onlyEvenElements = filter(myVector, &isEven);
    print(onlyEvenElements);

    cout << "Transform (makeDouble): " << endl;
    myVector = transform(myVector, &makeDobule);
    print(myVector);

    cout << "Transform again (makeTriple): " << endl;
    myVector = transform(myVector, &makeTriple);
    print(myVector);

    cout << "Filtered vector (greaterThanTen)" << endl;
    vector<int> greaterVector = filter(myVector, &isGreaterThanTen);
    print(greaterVector);

    cout << "Inline composition (greterThan20)" << endl;

    // We can also write directly the functor filter we want to use!!!
    vector<int> greaterThan20 = filter(greaterVector, [](int a){ return a>20; } );
    print(greaterThan20);

    cout << "End!" << endl;

    return 0;
}
