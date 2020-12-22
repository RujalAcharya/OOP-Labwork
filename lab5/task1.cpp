// Write a program in CPP to find the sum of two integer numbers and two float numbers using the
// concept of function template.

#include <iostream>

template <class T>
T sum (T a, T b) {
    return a + b;
}

int main ( ) {
    int a, b;
    float fa, fb;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "The sum of " << a << " and  " << b << " is " << sum (a, b) << std::endl;

    std::cout << "Enter two floating point numbers: ";
    std::cin >> fa >> fb;
    std::cout << "The sum of " << fa << " and " << fb << " is " << sum (fa, fb) << std::endl; 
    return EXIT_SUCCESS;
}

