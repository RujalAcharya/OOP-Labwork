// WAP in CPP to illustrate the concept of default arguments. 

#include <iostream>

using namespace std;

float areavolume(float l, float b, float h = 1) {
    return l*b*h;
} 


int main() {
    float l, b, h;
    cout << "Enter the length and breadth of the rectangle" << endl;
    cin >> l >> b;
    cout << "Area = " << areavolume(l,b) << endl;
    cout << "Enter the length, breadth and height of the cuboid" << endl;
    cin >> l >> b >> h;
    cout << "Volume = " << areavolume(l,b,h) << endl;
    return 0;
}