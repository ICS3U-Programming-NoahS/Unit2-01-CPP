// Copyright (c) 2023 Noah Smith All rights reserved
//
// Created by: Noah Smith
// Created on: Sept. 22nd, 2023
// This program calculates and displays the area and
// circumference of a circle with a radius of 4.9 cm.
#include <cmath>
#include <iostream>

int main() {
    std::cout << "For a circle that has a radius of 4.9 cm\n";
    std::cout << "\n";
    std::cout << "Area = " << M_PI * pow(4.9, 2) << " cm^2\n";
    std::cout << "Circumference = " << M_PI * 2 * 4.9 << " cm\n";
}
