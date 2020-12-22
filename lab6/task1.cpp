//WAP in CPP to illustrate the concept of single inheritance using following diagram.
//
//                        ***********
//                        * student *
//                        ***********
//                             ^
//                             |
//                        ***********     
//                        *  leader *
//                        ***********

#include <iostream>

class Student {
    public:
        void getStudentData ( );

    protected:
        std::string name;
        std::string address;
        int roll;
};

class Leader : public Student {
    public:
        void getData ( );
        void showData ( );

    private:
        std::string unionName;
        int unionID;
};

void Student::getStudentData ( ) {
    std::cout << "Enter student name: ";
    std::cin >> this->name;
    std::cout << "Enter student address: ";
    std::cin >> this->address;
    std::cout << "Enter student roll no: ";
    std::cin >> this->roll;
}

void Leader::getData ( ) {
    this->getStudentData ( );
    std::cout << "Enter the name of union: ";
    std::cin >> this->unionName;
    std::cout << "Enter Union ID no: ";
    std::cin >> this->unionID;
}

void Leader::showData ( ) {
    std::cout << "Name: " << this->name << std::endl
              << "Address: " << this->address << std::endl
              << "Roll no: " << this->roll << std::endl
              << "Name of union: " << this->unionName << std::endl
              << "Union ID: " << this->unionID << std::endl;
}

int main ( ) {
    Leader leader;
    leader.getData ( );
    leader.showData ( );
    return EXIT_SUCCESS;
}