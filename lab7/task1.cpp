// WAP in CPP to illustrate the concept of re_interpret cast operator.

#include <iostream>

class Rectangle {
    public:
        void getData ( );

    private:
        int length;
        int breadth;
};

class Parallelogram {
    public:
        void showData ( );

    private:
        int length;
        int height;
};

void Rectangle::getData ( ) {
    std::cout << "Enter the length and breadth of rectangle: " << std::endl;
    std::cin >> this->length >> this->breadth;
}

void Parallelogram::showData ( ) {
    std::cout << "Length of parallelogram: " << this->length << std::endl
              << "Height of parallelogram: " << this->height << std::endl;
}

int main ( ) {
    Rectangle *rect;
    rect->getData ( );
    Parallelogram *par = reinterpret_cast <Parallelogram *> (rect);
    par->showData ( );
    return EXIT_SUCCESS;
}