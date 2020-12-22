// WAP in CPP to illustrate the concept of multipath inheritance and virtual base class using following
// diagram.
//
//
//                                            ***********
//                                            * student *
//                                            ***********
//                                              ^  ^  ^
//                                              |  |  |
//                                    -----------  |  -----------
//                                    |            |            |
//                              ************       |      ************
//                              * internal *       |      * external *
//                              ************       |      ************
//                                    ^            |            ^
//                                    |            |            |
//                                    ----------   |   ----------
//                                             |   |   |
//                                           *************
//                                           *  result   *
//                                           *************

#include <iostream>

class Student {
    public:
        void getStudentData ( );

    protected:
        std::string name;
        std::string address;
        int roll;
};

class Internal :  virtual public Student {
    public:
        void getInternalData ( );

    protected:
        float internalPercentage;
};

class External : virtual public Student {
    public:
        void getExternalData ( );

    protected:
        float externalPercentage;
};

class Result : public Internal, public External {
    public:
        void getData ( );
        void showData ( );

    private:
        float totalPercentage;
};

void Student::getStudentData ( ) {
    std::cout << "Enter the student name: ";
    std::cin >> this->name;
    std::cout << "Enter the address: ";
    std::cin >> this->address;
    std::cout << "Enter the roll number: ";
    std::cin >> this->roll;
}

void Internal::getInternalData ( ) {
    std::cout << "Enter percentage in internal exam: ";
    std::cin >> this->internalPercentage;
}

void External::getExternalData ( ) {
    std::cout << "Enter percentage in external exam: ";
    std::cin >> this->externalPercentage;
}

void Result::getData ( ) {
    this->getStudentData ( );
    this->getInternalData ( );
    this->getExternalData ( );
    this->totalPercentage = 0.2 * this->internalPercentage + 0.8 * this->externalPercentage;
}

void Result::showData ( ) {
    std::cout << "Name: " << this->name << std::endl
              << "Address: " << this->address << std::endl
              << "Roll No: " << this->roll << std::endl
              << "Internal Percentage: " << this->internalPercentage << std::endl
              << "External Percentage: " << this->externalPercentage << std::endl
              << "Final Percentage: " << this->totalPercentage << std::endl;
}

int main ( ) {
    Result result;
    result.getData ( );
    result.showData ( );
    return EXIT_SUCCESS;
}
