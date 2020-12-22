// Write a program in CPP to handle divide by zero exception using the concept of exception handling.

#include <iostream>

int main ( ) {
    float a, b;
    std::cout << "Enter two numbers: " ;
    std::cin >> a >> b;

    try {
        if (b == 0) {
            throw 0;
        }
        std::cout << a << " / " << b << " = " << a / b << std::endl;
    } catch (int n) {
        if (n == 0) {
            std::cerr << "Divide by zero exception caught..." << std::endl;
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}