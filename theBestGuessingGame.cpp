// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: April 2021
// This program  is the best guessing number game

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    std::string number_input;
    int number_integer;
    int number_random;

    std::random_device rseed;

    std::mt19937 rgen(rseed());

    std::uniform_int_distribution<int> idist(0, 9);

    number_random = idist(rgen);

    std::cout << "Try to guess a number from 0 to 9:" << std::endl;

    while (true) {
        try {
            std::cin >> number_input;

            number_integer = std::stoi(number_input);


            if (number_integer == number_random) {
                std::cout << "\nCongratulations, you guessed right!"
                << std::endl;
                break;
            } else {
                std::cout << "\nSorry, you guessed wrong! Try again:"
                << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "\nThis input is invalid, please, insert an integer."
            << std::endl;
        }
    }

    std::cout << "\nDone." << std::endl;
}
