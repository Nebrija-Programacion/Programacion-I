
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

#ifndef VECTORINT_H
#define VECTORINT_H

#include <vector>
#include <functional>

using namespace std;

class VectorInt{
public:
    // constructor
    VectorInt(vector<int> data = {});
    void push(int d);
    int pop();

    void forEach(function<void(int)> fp) const;
    VectorInt filter(function<bool(int)> fp) const;
    VectorInt map(function<int(int)> fp) const;
    unsigned long find(function<int(int)> fp) const;


private:
    vector<int> v;
};

#endif // VECTORINT_H
