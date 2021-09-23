// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program tells you the month of the year
//  with user's input

#include <iostream>
#include <string>

int main() {
    // this function tells you the month of the year
    std::string user_input;
    int monthAsInt;

    // input
    std::cout << "Enter a number (from 1 to 12): ";
    std::cin >> user_input;
    std::cout << "" << std::endl;

    monthAsInt = atoi(user_input.c_str());

    // process and output
    switch (monthAsInt) {
        case 1 :
            std::cout << "The month is January." << std::endl;
            break;
        case 2 :
            std::cout << "The month is february." <<std::endl;
            break;
        case 3 :
            std::cout << "The month is March." << std::endl;
            break;
        case 4 :
            std::cout << "The month is April." <<std::endl;
            break;
        case 5 :
            std::cout << "The month is May." << std::endl;
            break;
        case 6 :
            std::cout << "The month is June." <<std::endl;
            break;
        case 7 :
            std::cout << "The month is July." << std::endl;
            break;
        case 8 :
            std::cout << "The month is August." <<std::endl;
            break;
        case 9 :
            std::cout << "The month is September." << std::endl;
            break;
        case 10 :
            std::cout << "The month is October." << std::endl;
            break;
        case 11 :
            std::cout << "The month is November." <<std::endl;
            break;
        case 12 :
            std::cout << "The month is December." << std::endl;
            break;
        default :
            std::cout << "This number is not a month." << std::endl;
    }
        std::cout << "\nDone.";
    }
