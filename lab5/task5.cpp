// Write a program in CPP to illustrate the concept of rethrowing an exception

#include <iostream>

void divide (float a, float b) {
    try {
        if (b == 0) {
            throw 0;
        }
        std::cout << a << " / " << b << " = " << a / b << std::endl;
    } catch (int n) {
        if (n == 0) {
            std::cerr << "Can't catch the exception, rethrowing...." << std::endl;
            throw;
        }
    }
}

int main ( ) {
    float a, b;
    try {
        std::cout << "Enter the numbers you want to divide: " ;
        std::cin >> a >> b;
        divide (a, b);       
    } catch (int n) {
        if (n == 0) {
            std::cerr << "Divide by zero exception caught, quitting..." << std::endl;
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}