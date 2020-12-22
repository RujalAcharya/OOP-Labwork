// Write a program in CPP to find the area of rectangle with integer and float dimensions using the
// concept of class template.

#include <iostream>

template <class T>
class Rectangle {
    public:
        Rectangle(T a, T b);
        T area ( );

    private:
        T length;
        T breadth;
};

template <class T>
Rectangle <T> :: Rectangle (T a, T b) {
    this->length = a;
    this->breadth = b;
}

template <class T>
T Rectangle <T> :: area ( ) {
    return this->length * this->breadth;
}

int main ( ) {
    int a, b;
    float fa, fb;

    std::cout << "Enter the length and breadth as integers: ";
    std::cin >> a >> b;
    Rectangle <int> intRect (a, b);
    std::cout << "The area of rectangle is " << intRect.area ( ) << std::endl;

    std::cout << "Enter two floating point numbers: ";
    std::cin >> fa >> fb;
    Rectangle <float> floatRect (fa, fb);
    std::cout << "The area of rectangle is " << floatRect.area ( ) << std::endl;
    return EXIT_SUCCESS;
}