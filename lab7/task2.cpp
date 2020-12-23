// WAP in CPP to illustrate the concept of dynamic cast operator.

#include <iostream>

class Parent {
    public:
        virtual void temp ( ) { }
        Parent ( );
};

class Child : public Parent {
    public:
        Child ( );
};

Parent::Parent ( ) {
    std::cout << "Inside parent class constructor..." << std::endl;
}

Child::Child ( ) {
    std::cout << "Inside child class constructor..." << std::endl;
}

int main ( ) {
    Parent *p = new Child ( );
    Child *c = dynamic_cast <Child *> (p);
    if (c != NULL) {
        std::cout << "Successfully downcasted..." << std::endl;
        return EXIT_SUCCESS;
    } else {
        std::cerr << "Error occured while casting..." << std::endl;
        return EXIT_FAILURE;
    }
}