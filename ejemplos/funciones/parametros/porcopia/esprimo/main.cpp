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
  In this program we are using a function that takes one parameter and returns a boolean.
  Both the parameter and the return value are done "by copy". That is, the parameter is copied
  when use inside the function, consequentely, even if we modified it inside the function
  it would the "outside" parameter would not be affected.
*******************************************************************************************/

#include <iostream>

using namespace std;

/**
 * @brief isPrimeNumber return whether a number prime or not
 * @param number the number to check
 * @return true if number is prime
 */
bool isPrimeNumber(unsigned int number){
    if(number == 1 || number == 2 || number == 3) return true;
    for(unsigned int i{2}; i<=number/2; i++){
        if(number % i == 0 ) return false;
    }

    return true;
}

int main()
{
    cout << "Introduce a whole positive number: ";
    unsigned int num;
    cin >> num;
    if(isPrimeNumber(num)){
        cout << num << " is prime" << endl;
    }else{
        cout << num << " is NOT prime" << endl;
    }
    return 0;
}
