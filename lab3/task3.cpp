// WAP in CPP to find the sum of two complex numbers using the concept of overloading 
// binary + operator using member function.

#include <iostream>

class Complex {
    public:
    Complex();
    Complex(float, float);
    void getdata();
    void showdata();
    Complex operator + (Complex);

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

Complex Complex::operator +(Complex a) {
    Complex temp;
    temp.re = re + a.re;
    temp.imz = imz + a.imz;
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