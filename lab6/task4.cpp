// WAP in CPP to illustrate the concept of constructor and destructor invocation in single inheritance.

#include <iostream>

class Parent {
    public:
        Parent ( );
        ~ Parent ( );
};

class Child : public Parent {
    public:
        Child ( );
        ~ Child ( );
};

Parent::Parent ( ) {
    std::cout << "Inside constructor of parent class..." << std::endl;
}

Parent :: ~ Parent ( ) {
    std::cout << "Inside destructor of parent class..." << std::endl;
}

Child::Child ( ) {
    std::cout << "Inside constructor of child class..." << std::endl;
}

Child :: ~ Child ( ) {
    std::cout << "Inside destructor of child class..." << std::endl;
}

int main ( ) {
    Child child;
    return EXIT_SUCCESS;
}