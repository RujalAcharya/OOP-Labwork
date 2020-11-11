//
// WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
// user defined to user defined conversion by writing conversion routine in destination class.
//

#include <iostream>
#include <cmath>

class Cartesian {
    public:
        Cartesian();
        Cartesian(float, float);
        void getdata();

    private:
        float x;
        float y;

        friend class Polar;

};

class Polar {
    public:
        Polar();
        Polar(float, float);
        Polar(Cartesian);
        void showdata();

    private:
        float r;
        float theta;
};

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


Polar::Polar(Cartesian c) {
    r = sqrt(pow(c.x, 2) + pow(c.y, 2));
    theta = atan(c.y / c.x);
}


int main() {
    Cartesian cartesian;
    cartesian.getdata();
    Polar polar;
    polar = cartesian;
    polar.showdata();
    return 0;
}