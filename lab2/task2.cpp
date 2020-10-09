// WAP in CPP to input the name, roll, marks and address of n students from the user and display
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
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks : " << marks << endl;
        cout << "Address : " << address << endl;
    }
};

class Students {
    Student s[20];
    int n;

    public:
    void getdata() {
        cout << "Enter the number of students : " ;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "For student " << i+1 << endl;
            s[i].getdata();
        }
    }

    void showdata() {
        for (int i = 0; i < n; i++) {
            cout << ".....Displaying details of student " << i+1 << "....." << endl;
            s[i].showdata();
        }
    }
};

int main() {
    Students students;
    students.getdata();
    students.showdata();
    return 0;
}