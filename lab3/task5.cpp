// WAP in CPP to find the product of two 3 x 3 matrices entered by user by overloading 
// binary * operator

#include <iostream>

class Matrix {
    public:
    void getdata();
    void showdata();
    Matrix operator * (Matrix);

    private:
    int mat[3][3];
};

void Matrix::getdata() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Enter value of row " << i+1 << ", column " << j+1 << " : ";
            std::cin >> mat[i][j];
        }
    }
}

void Matrix::showdata() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << mat[i][j] << "\t" ;
        }
    std::cout << std::endl;
    }
}

Matrix Matrix::operator * (Matrix A) {
    Matrix temp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 ; j++) {
            int sum = 0;
            for (int k = 0; k < 3 ; k++) {
                sum += mat[i][k] * A.mat[k][j];
            }
            temp.mat[i][j] = sum;
        }
    }
    return temp;
}

int main() {
    Matrix A, B, SUM;
    A.getdata();
    B.getdata();
    SUM = A * B;
    SUM.showdata();
    return 0;
}