// WAP in CPP to input the name, roll, marks and address of a student from the user and display
// the entered details using the concept of class and object.

#include <iostream>

using namespace std;

class Student {
    char name[20];
    int roll;
    float marks;
    char address[10];

    public:
    void getdata() {
        cout << "Enter the name, roll, marks and address of the student " << endl;
        cin >> name >> roll >> marks >> address;
    } 

    void showdata() {
        cout << ".....Displaying details of the student....." << endl;
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks : " << marks << endl;
        cout << "Address : " << address << endl;
    }
};

int main() {
    Student student;
    student.getdata();
    student.showdata();
    return 0;
}