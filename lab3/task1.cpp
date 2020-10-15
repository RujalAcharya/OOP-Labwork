// WAP in CPP to overload unary ++ for postfix and prefix increment operation on 
// complex numbers using member function.

#include <iostream>

class Complex {
    public:
    Complex();
    Complex(float, float);
    Complex operator ++();
    Complex operator ++(int);
    void getdata();
    void showdata();

    private:
    float re, imz;
};

Complex::Complex() {
    re = 0;
    imz = 0;
}

Complex::Complex(float r, float i) {
    re = r;
    imz = i;
}

Complex Complex::operator ++ () {
    Complex temp;
    temp.re = ++re;
    temp.imz = ++imz;
    return temp;
}

Complex Complex::operator ++ (int) {
    Complex temp;
    temp.re = re++;
    temp.imz = imz++;
    return temp;
}

void Complex::getdata() {
    std::cout << "Enter real and imaginary parts" << std::endl;
    std::cin >> re >> imz; 
}

void Complex::showdata() {
    if (imz < 0) {
        std::cout << re << imz << "i" << std::endl;
    } else {
        std::cout << re << "+" << imz << "i" << std::endl;
    }
}

int main() {
    Complex a, b, c, d;
    a.getdata();
    b.getdata();
    c = a++;
    d = ++b;
    a.showdata();
    b.showdata();
    c.showdata();
    d.showdata();
    return 0;
}