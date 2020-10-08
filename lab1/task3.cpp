// WAP in CPP to find the area of circle and rectangle using the concept of function overloading.

#include <iostream>

using namespace std;

const float PI = 3.1415;

float area (float r) {
    return PI * r * r ;
}

float area (float a, float b) {
    return a * b;
}

int main() {
    float r, a, b;
    cout << "Enter the radius of circle: ";
    cin >> r;
    cout << "Enter the length and breadth of rectangle: ";
    cin >> a >> b;
    cout << "Area of circle = " << area(r) << endl;
    cout << "Area of rectangle = " << area(a,b) << endl;
}