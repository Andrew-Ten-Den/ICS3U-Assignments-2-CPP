// Copyright 2022 MTHS
// Author: Andrew Ten-Den
// This program calculates the volume of a rectangular prism
//    with user input

#include <iostream>

int main() {
    // this function calculates volume of a rectangular prism
    int length;
    int width;
    int height;
    int volume;

    // input
    std::cout << "Enter length of the rectangle (cm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (cm): ";
    std::cin >> width;
    std::cout << "Enter height of the rectangle (cm): ";
    std::cin >> height;

    // process
    volume = length*width*height;

    // output
    std::cout << "" << std::endl;
    std::cout << "Volume is " << volume << " cm³." << std::endl;

    std::cout << "\nDone." << std::endl;
}
