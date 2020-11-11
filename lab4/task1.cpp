//
// Write a program in CPP to convert the distance in meters entered by the user into distance in feet and
// inch using the concept of basic to user defined data conversion.
//

#include <iostream>

class Distance {
    public:
        Distance();
        Distance(float);
        void showdata();

    private:
        float feet;
        float inch;
};

Distance::Distance() {
    feet = 0;
    inch = 0;
}

Distance::Distance(float meters) {
    float tfeet = meters * 3.2808;
    feet = int(tfeet);
    inch = (tfeet - feet) * 12;
}

void Distance::showdata() {
    std::cout << "The distance in feet and inch is: " << std::endl;
    std::cout << feet << "'" << inch << "\"" << std::endl;
}

int main() {
    Distance d;
    float meters;
    std::cout << "Enter distance in meters: " ;
    std::cin >> meters;
    d = meters;
    d.showdata();
    return 0;
}