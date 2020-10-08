// WAP in CPP to illustrate the concept of inline function. 

#include <iostream>

using namespace std;

inline float add(float a, float b) {
    return a + b;
}

inline float subtract(float a, float b) {
    return a - b;
}

inline float multiply(float a, float b) {
    return a * b;
}

inline float divide(float a, float b) {
    return a / b;
}

int main() {
    float a, b;
    char opr, q;
    do{
        cout << "Enter the expression " << endl;
        cin >> a >> opr >> b;
        switch (opr){
            case '+':
                cout << add(a,b) << endl;
                break;
            case '-':
                cout << subtract(a,b) << endl;
                break;
            case 'x':
            case '*':
                cout << multiply(a,b) << endl;
                break;
            case '/':
                cout << divide(a,b) << endl;
                break;
            default:
                cout << "Invalid operator" << endl;
        }
        cout << "Enter q to quit, any other character to continue: ";
        cin >> q;
    } while(q != 'q'); 
    return 0;
}