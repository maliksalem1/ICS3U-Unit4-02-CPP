// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022
// This program uses while loops

#include <iostream>
#include <string>

    int positiveInteger;
    int loopCounter = 0;
    int multiplyInt = 1;
    std::string positiveString;

int main() {
    // This function multiplies all the whole numbers up to the inputted number

    // Input

    std::cout << "Enter a positive integer: ";
    std::cin >> positiveString;
    std::cout << std::endl;

    // Process and output
    try {
        positiveInteger = std::stoi(positiveString);
        if (positiveInteger >= 0) {
            do {
                loopCounter = loopCounter + 1;
                multiplyInt = multiplyInt * loopCounter;
            } while (loopCounter < positiveInteger);
            if (loopCounter >= positiveInteger)
                std::cout << "" << positiveInteger << "!"
                          << " = " << multiplyInt << "" << std::endl;
        } else {
            std::cout << "" << positiveString
                      << " is not a positive integer" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "" << positiveString
                  << " is not a valid input." << std::endl;
    }

    std::cout << "\nDone.";
}
