// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 25/11/2022
// This program will generate a number between
// 0 - 9 it will loop until user guesses right

#include <iostream>
#include <random>

int main() {
// declare variables
    std::string stringNum;
    int randomNum, intNum;

// generate random number from 0 to 9
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNum = idist(rgen);

    while (true) {
// get input from user
        std::cout << "Enter a number between 0 - 9: ";
        std::cin >> stringNum;

            try {  // catch any strings
            intNum = std::stoi(stringNum);

            if (intNum < 0 || intNum > 9) {  // if num < 0 or > 9
                std::cout << intNum << " is invalid "
                << std::endl;
            } else {
                if (intNum == randomNum) {  // when user guesses correctly
                    std::cout << intNum << " is correct";
                    break;  // end the loop and program
                } else {  // when wrong and loop continues
                    std::cout << intNum << " is wrong, try again" << std::endl;
                } }
        } catch (std::invalid_argument) {  // to catch invalid inputs
            std::cout << stringNum << " is invalid, enter a number "
            << std::endl;
        }
}
}
