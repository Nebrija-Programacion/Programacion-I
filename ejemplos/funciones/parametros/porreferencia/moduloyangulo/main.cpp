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
  In this program we are creating a function to compute module and angle with x axis of a 2-dimensional vector
  As a function cannot return two values (module and angle), we are usign its parameters to return the values
  For doing so the parameters must be passed by reference.

  Futhermore the vector is also passed by reference, to avoid copyng its value (loss of memory and time).
  As we do not want to change the vector we make it a constant reference
*******************************************************************************************/


#include <iostream>
#include <array>
#include <math.h>

using namespace std;

void moduleAndAngle(array<double, 2> const & v, double & module, double & angle){
    module = sqrt(v.at(0)*v.at(0) + v.at(1)*v.at(1));
    angle = acos(v.at(0) / module);
}

int main()
{
    array<double,2> vector{{3,4}};
    double m,a;

    moduleAndAngle(vector,m,a);

    cout << "Module: " << m << endl;
    cout << "Angle: " << a << " radians" << endl;
    return 0;
}
