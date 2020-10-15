// WAP in CPP to find the sum of two complex numbers using the concept of overloading 
// binary + operator using non-member/friend function.

#include <iostream>

class Complex {
    public:
    Complex();
    Complex(float, float);
    void getdata();
    void showdata();
    friend Complex operator + (Complex, Complex);

    private:
    float re;
    float imz;
};

Complex::Complex() {
    re = 0;
    imz = 0;
}

Complex::Complex(float r, float i) {
    re = r;
    imz = i;
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

Complex operator +(Complex a, Complex b) {
    Complex temp;
    temp.re = a.re + b.re;
    temp.imz = a.imz + b.imz;
    return temp;
} 

int main() {
    Complex a, b, sum;
    a.getdata();
    b.getdata();
    sum = a + b;
    sum.showdata();
    return 0;
}