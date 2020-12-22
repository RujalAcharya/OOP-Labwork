// Write a program in CPP to sort the list of n strings in alphabetical order using the concept of STL.

#include <iostream>
#include <list>

int main ( ) {
    int n;
    std::string temp;
    std::list <std::string> strings;

    std::cout << "Enter the number of strings: " ;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        strings.push_back (temp);
    }

    strings.sort ( );

    while (!strings.empty ( )) {
        std::cout << strings.front ( ) << std::endl;
        strings.pop_front ( );
    }

    return EXIT_SUCCESS;
}