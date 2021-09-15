// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sep 2021
// This program calculates the circumference of a circle
//    with radius inputted from the user

#include <iostream>

int main() {
    // this function calculates the circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter the radius of your circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU * radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "The circumference is " << circumference << " mm" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done.";
}
