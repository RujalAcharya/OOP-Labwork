// Write a program in CPP to find the sum of two complex numbers using the OOP concept.

#include <iostream>

using namespace std;

class Complex {
    float re;
    float imz;

    public:
    void getdata() {
        cout << "Enter the real and imaginary parts" << endl;
        cin >> re >> imz;
    }

    void showdata() {
        if (imz < 0) {
            cout << re << imz << "i" << endl;
        } else {
            cout << re << "+" << imz << "i" << endl;
        }
    }

    void add(Complex a, Complex b) {
        re = a.re + b.re;
        imz = a.imz + b.imz;
    }
};

int main() {
    Complex a,b,sum;
    a.getdata();
    b.getdata();
    sum.add(a, b);
    sum.showdata();
    return 0;
}