
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

#include "vectorint.h"


VectorInt::VectorInt(vector<int> data):v{data}
{

}

void VectorInt::push(int d)
{
    v.push_back(d);
}

int VectorInt::pop()
{
    int result = v.at(v.size()-1);
    v.pop_back();
    return result;
}

void VectorInt::forEach(function<void (int)> fp) const
{
    for(auto elem:v){
        fp(elem);
    }
}

VectorInt VectorInt::filter(function<bool (int)> fp) const
{
    vector<int> result;
    for(auto elem:v){
        if(fp(elem)) result.push_back(elem);
    }

    return VectorInt(result);
}

VectorInt VectorInt::map(function<int (int)> fp) const
{
    vector<int> result;
    for(auto elem:v){
        result.push_back(fp(elem));
    }

    return VectorInt(result);
}

unsigned long int VectorInt::find(function<int (int)> fp) const
{
    for(unsigned long int i=0; i<v.size(); i++){
        if(fp(v.at(i))) return i;
    }

    return -1;
}

