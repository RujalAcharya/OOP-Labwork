// WAP in CPP to illustrate the concept of constructor and destructor invocation in multiple inheritance.

#include <iostream>

class High {
    public:
        High ( );
        ~ High ( );
};

class Middle : public High {
    public:
        Middle ( );
        ~ Middle ( );
};

class Low : public Middle {
    public:
        Low ( );
        ~ Low ( );
};

High::High ( ) {
    std::cout << "Inside constructor of class with highest hierarchy..." << std::endl;
}

High :: ~ High ( ) {
    std::cout << "Inside destructor of class with highest hierarchy..." << std::endl;
}

Middle::Middle ( ) {
    std::cout << "Inside constructor of class with middle hierarchy..." << std::endl;
}

Middle :: ~ Middle ( ) {
    std::cout << "Inside destructor of class with middle hierarchy..." << std::endl;
}

Low::Low ( ) {
    std::cout << "Inside constructor of class with lowest hierarchy..." << std::endl;
}

Low :: ~ Low ( ) {
    std::cout << "Inside destructor of class with lowest hierarchy..." << std::endl;
}

int main ( ) {
    Low low;
    return EXIT_SUCCESS;
}