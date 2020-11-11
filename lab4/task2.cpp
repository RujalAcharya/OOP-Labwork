//
// Write a program in CPP to convert the distance in feet and inch entered by the user into distance in
// meters using the concept o user defined to basic data conversion.
//

#include <iostream>

class Distance {
    public:
        Distance();
        Distance(float, float);
        operator float();
        void getdata();

    private:
        float feet;
        float inch;
};

Distance::Distance() {
    feet = 0;
    inch = 0;
}

Distance::Distance(float f, float i) {
    feet = f;
    inch = i;
}

Distance::operator float() {
    return (feet + inch / 12) / 3.2808;
}

void Distance::getdata() {
    std::cout << "Enter the distance in feet and inch: " << std::endl;
    std::cin >> feet >> inch;
}

int main() {
    Distance d;
    float meters;
    d.getdata();
    meters = d;
    std::cout << "Distance in meters: " << meters << "m" << std::endl;
    return 0;
}