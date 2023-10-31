// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Oct, 23 2023
// This program asks the user for their age
// and lets them know if they can date their grandchild.

#include <iostream>
#include <string>

int main() {
    // declaring variables.
    std::string userAgeStr;
    float userAgeFlt;

    // Input - get user age.
    std::cout << "Enter your age: ";
    std::cin >> userAgeStr;

    try {
        userAgeFlt = std::stof(userAgeStr);
        // process - checks age
        if (userAgeFlt < 1 || userAgeFlt > 119) {
            std::cout << "Enter a valid age." << std::endl;
        } else if (userAgeFlt > 40) {
            std::cout << "You are too old to date my grandchild." << std::endl;
        } else if (userAgeFlt < 25) {
            std::cout << "You're too young to date my grandchild." << std::endl;
        } else {
            std::cout << "You can date my grandchild." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please input a valid number." << std::endl;
    }
}
