// WAP in CPP to illustrate the concept of multiple inheritance using following diagram.
//
//                                    ***********      ************
//                                    * student *      * employee *
//                                    ***********      ************
//                                         ^                 ^
//                                         |                 |
//                                         -------     -------
//                                                |   |
//                                             ***********
//                                             * officer *
//                                             ***********


#include <iostream>

class Student {
    public:
        void getStudentData ( );

    protected:
        std::string university;
        std::string degree;
        int roll;
};

class Employee {
    public:
        void getEmployeeData ( );
    
    protected:
        std::string company;
        std::string position;
        int id;
};

class Officer: public Student, public Employee {
    public:
        void getData ( );
        void showData ( );

    private:
        std::string name;
};

void Student::getStudentData ( ) {
    std::cout << "Enter the name of university: ";
    std::cin >> this->university;
    std::cout << "Enter the degree: ";
    std::cin >> this->degree;
    std::cout << "Enter roll no: ";
    std::cin >> this->roll; 
}

void Employee::getEmployeeData ( ) {
    std::cout << "Enter the name of company: ";
    std::cin >> this->company;
    std::cout << "Enter the employee position: ";
    std::cin >> this->position;
    std::cout << "Enter the employee id: ";
    std::cin >> this->id;
}

void Officer::getData ( ) {
    std::cout << "Enter the name of officer: ";
    std::cin >> this->name;
    this->getStudentData ( );
    this->getEmployeeData ( );
}

void Officer::showData ( ) {
    std::cout << "Name: " << this->name << std::endl
              << "University: " << this->university << std::endl
              << "Degree: " << this->degree << std::endl
              << "Roll No: " << this->roll << std::endl
              << "Company: " << this->company << std::endl
              << "Position: " << this->position << std::endl
              << "Employee ID: " << this->id << std::endl;
}

int main ( ) {
    Officer officer;
    officer.getData ( );
    officer.showData ( );
    return EXIT_SUCCESS;
}