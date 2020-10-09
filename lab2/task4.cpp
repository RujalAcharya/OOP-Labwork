// Write a program in CPP to illustrate the concept of constructor (default, parameterized
// and copy) and destructor using class complex as an example.

#include <iostream>

using namespace std;

class Complex {
    float re;
    float imz;

    public:
    Complex() {
        re = 0;
        imz = 0;
    }

    Complex(float r, float i) {
        re = r;
        imz = i;
    }

    ~Complex() {
        cout << "Destroying the object with real part " << re << " and imaginary part " << imz << endl;
    }

    void showdata() {
        if (imz < 0) {
            cout << re << imz << "i" << endl;
        } else {
            cout << re << "+" << imz << "i" << endl;
        }
    }

};

int main() {
    Complex a, b(2,-1.5), c(b);
    a.showdata();
    b.showdata();
    c.showdata();
}