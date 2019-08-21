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
  In this program we are showing how to compute Fibonacci Serie using a recursive function
*******************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;




/**
 * @brief fibonacci computes de n-term of the fibonacci sequence recursively
 * @param n - term number
 * @return the finobacci number
 */
unsigned int fibonacci(unsigned int n){
    if(n <= 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}


/**
 * @brief fibonacci computes the fibonacci serie with n numbers
 * @param n number of numbers
 * @param result the vector where the serie will be saved (this vector is modified)
 * @return a reference to the result vector (for convenience)
 */
vector<unsigned int> & buildFibonacci(unsigned int n, vector<unsigned int> &result){
    for(unsigned int i{1}; i<=n; i++){
        result.push_back(fibonacci(i));
    }

    return result;
}

void print(vector<unsigned int> const & v){

    for(auto elem: v){
        cout << elem << " - ";
    }
    cout << endl;
}


int main()
{
    vector<unsigned int> fibonacciVector;
    unsigned int number;
    cout << "How many numbers do you want to compute? ";
    cin >> number;

    fibonacciVector = buildFibonacci(number, fibonacciVector);
    print(fibonacciVector);


    return 0;
}
