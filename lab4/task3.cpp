//
// WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
// user defined to user defined conversion by writing conversion routine in source class.
//

#include <iostream>
#include <cmath>

class Polar {
    public:
        Polar();
        Polar(float, float);
        void showdata();

    private:
        float r;
        float theta;
};

class Cartesian {
    public:
        Cartesian();
        Cartesian(float, float);
        operator Polar();
        void getdata();

    private:
        float x;
        float y;
};

Polar::Polar() {
    r = 0;
    theta = 0;
}

Polar::Polar(float ar, float th) {
    r = ar;
    theta = th;
}

void Polar::showdata() {
    std::cout << "The coordinate in polar form is (" << r << "," << theta << ")" << std::endl;
}

Cartesian::Cartesian() {
    x = 0;
    y = 0;
}

Cartesian::Cartesian(float xx, float yy) {
    x = xx;
    y = yy;
}

void Cartesian::getdata() {
    std::cout << "Enter the coordinate in cartesian form: " ;
    std::cin >> x >> y;
}

Cartesian::operator Polar() {
    return Polar(sqrt(pow(x, 2) + pow(y, 2)), atan(y / x));
}

int main() {
    Cartesian cartesian;
    Polar polar;
    cartesian.getdata();
    polar = cartesian;
    polar.showdata();
    return 0;
}