// WAP in CPP to overload unary ++ for postfix and prefix increment operation on 
// complex numbers using non-member/friend function.

#include <iostream>

class Complex {
    public:
    Complex();
    Complex(float, float);
    friend Complex operator ++(Complex &);
    friend Complex operator ++(Complex &, int);
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

Complex operator ++ (Complex &a) {
    Complex temp;
    temp.re = ++a.re;
    temp.imz = ++a.imz;
    return temp;
}

Complex operator ++ (Complex &a, int) {
    Complex temp;
    temp.re = a.re++;
    temp.imz = a.imz++;
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