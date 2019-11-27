// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: November 2019
// This program calculates the volume of a rectangular prism

#include <iostream>


int calculate(int length, int width, int height) {
    // calculates the volume
    int area;
    // process
    area = length * width * height;
    // output
    std::cout << "" << std::endl;
    std::cout << "VOLUME: " << area << "cm³" << std::endl;
}


int main() {
    // variables
    std::string lenCheck;
    std::string widCheck;
    std::string heiCheck;
    int lenInt;
    int widInt;
    int heiInt;
    // input
    std::cout << "length of cube (cm): ";
    std::cin >> lenCheck;
    std::cout << "width of cube (cm): ";
    std::cin >> widCheck;
    std::cout << "height of cube (cm): ";
    std::cin >> heiCheck;
    try {
        lenInt = std::stoi(lenCheck);
        widInt = std::stoi(widCheck);
        heiInt = std::stoi(heiCheck);
        calculate(lenInt, widInt, heiInt);
    } catch (std::invalid_argument) {
        std::cout << "invalid input";
    }
}
