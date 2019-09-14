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
  In this program we are using a function that takes no parameters and has no return value.
  It simply prints the date and time
*******************************************************************************************/


#include <iostream>
#include <chrono>
#include <ctime>


void printTime(){

    std::chrono::time_point<std::chrono::system_clock> time;
    time = std::chrono::system_clock::now();
    std::time_t date = std::chrono::system_clock::to_time_t(time);

    std::cout << "Current date and time is  " << std::ctime(&date) << "\n";
}

int main()
{
    printTime();
    return 0;
}
