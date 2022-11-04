// Copyright (c) 2021 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Nov 2022
// This program uses while loops to add integers

#include <iostream>

int main() {
    // This function uses while loops to add integers

    int integerAsInteger;
    int counter = 0;
    int sum = 0;
    std::string integerAsString;

    // Input
    std::cout << "Input a positive number: ";
    std::cin >> integerAsString;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        integerAsInteger = std::stoi(integerAsString);

        while (counter < integerAsInteger) {
            counter = counter + 1;
            sum = sum + counter;
        }
        std::cout << "The sum of all positive numbers from 1 to "
            << integerAsString << " is " << sum << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input." << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
