// WAP in CPP to illustrate the concept of virtual functions.

#include <iostream>

class College {
    public:
        virtual void getData ( ) = 0;
        virtual void showData ( ) = 0;
        virtual ~ College ( ) { }

    protected:
        std::string name, address;
};

class Student : public College {
    public:
        void getData ( );
        void showData ( );
    
    private:
        int roll;
};

class Teacher : public College {
    public:
        void getData ( );
        void showData ( );

    private:
        int id;
};

void Student::getData ( ) {
    std::cout << "Enter student name: ";
    std::cin >> this->name;
    std::cout << "Enter student address: ";
    std::cin >> this->address;
    std::cout << "Enter student roll no: ";
    std::cin >> this->roll;
}

void Student::showData ( ) {
    std::cout << "Student name: " << this->name << std::endl
              << "Student address: " << this->address << std::endl
              << "Student roll no: " << this->roll << std::endl; 
}

void Teacher::getData ( ) {
    std::cout << "Enter teacher name: ";
    std::cin >> this->name;
    std::cout << "Enter teacher address: ";
    std::cin >> this->address;
    std::cout << "Enter teacher id no: ";
    std::cin >> this->id;
}

void Teacher::showData ( ) {
    std::cout << "Teacher name: " << this->name << std::endl
              << "Teacher address: " << this->address << std::endl
              << "Teacher id no: " << this->id << std::endl; 
}

int main ( ) {
    College *college;
    college = new Student ( );
    college->getData ( );
    college->showData ( );
    delete college;
    college = new Teacher ( );
    college->getData ( );
    college->showData ( );
    delete college;
    return EXIT_SUCCESS;
}