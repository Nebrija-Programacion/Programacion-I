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
  In this program we are showing how to compute Fibonacci Serie using an iterative function
*******************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief fibonacci computes the fibonacci serie with n numbers
 * @param n number of numbers
 * @param result the vector where the serie will be saved (this vector is modified)
 * @return a reference to the result vector (for convenience)
 */
vector<int> & fibonacci(unsigned int n, vector<int> &result){
    result.clear();
    result = {1,1};

    for(unsigned int i = 2; i < n; i++){
        result.push_back(result.at(i-2) + result.at(i-1));
    }

    return result;
}

void print(vector<int> const & v){

    for(auto elem: v){
        cout << elem << " - ";
    }
    cout << endl;
}


int main()
{
    vector<int> fibonacciVector;
    unsigned int number;
    cout << "How many numbers do you want to compute? ";
    cin >> number;

    fibonacciVector = fibonacci(number, fibonacciVector);
    print(fibonacciVector);


    return 0;
}
