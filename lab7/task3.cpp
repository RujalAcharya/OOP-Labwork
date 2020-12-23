// WAP in CPP to illustrate the concept of typeid operator.

#include <iostream>

class Base {
    public:
        virtual void temp ( ) { }
        Base ( );
};

class Complex : public Base {
    public:
        Complex ( );
    
    private:
        int real, imz;
};

class Rectangle {
    public:
        Rectangle ( );

    private:
        float length, breadth;
};

Base::Base ( ) {
    std::cout << "Inside base class..." << std::endl;
}

Complex::Complex ( ) {
    std::cout << "Inside complex class..." << std::endl;
}

Rectangle::Rectangle ( ) {
    std::cout << "Inside rectangle class..." << std::endl;
}

int main ( ) {
    int i, *iptr;
    float f, *fptr;
    char ch, *chptr;
    Base b, *bptr;
    Complex cmp, *cmptr;
    Rectangle r, *rptr;

    std::cout << "Lvalue of: " << std::endl
              << "Integer: " << typeid(i).name( ) << std::endl
              << "Integer pointer: " << typeid(iptr).name( ) << std::endl
              << "Float: " << typeid(f).name( ) << std::endl
              << "Float pointer: " << typeid(fptr).name( ) << std::endl
              << "Character: " << typeid(ch).name( ) << std::endl
              << "Character pointer: " << typeid(chptr).name( ) << std::endl
              << "Base class: " << typeid(b).name( ) << std::endl
              << "Base class pointer: " << typeid(bptr).name( ) << std::endl
              << "Complex class: " << typeid(cmp).name( ) << std::endl
              << "Complex class pointer: " << typeid(cmptr).name( ) << std::endl
              << "Rectangle class: " << typeid(r).name( ) << std::endl
              << "Rectangle class pointer: " << typeid(rptr).name( ) << std::endl;

    return EXIT_SUCCESS;
}