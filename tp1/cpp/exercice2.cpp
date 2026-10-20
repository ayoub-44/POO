#include <iostream>
#include <string>
#include <cstdint>

int main() {
    int nbEtudiants = 32;
    double moyenne = 12.75;
    std::string filiere = "SD-RCC";
    bool admis = true;
    std::cout << nbEtudiants << " " << moyenne << " " << filiere << " " << admis << std::endl;

    //nbEtudiants = "trente-deux";
    std::cout << "7/2 = " << (7 / 2) << std::endl;
    std::cout << "7.0/2 = " << (7.0 / 2) << std::endl;
    std::cout << "7%2 = " << (7 % 2) << std::endl; 
    int32_t maxInt = 2147483647;
    std::cout <<  (maxInt + 1) << std::endl;
    int64_t maxInt64 = 2147483647LL;
    std::cout <<  (maxInt64 + 1) << std::endl;
    std::cout << "Sans boolalpha : " << admis << std::endl;
    std::cout << "Avec boolalpha : " << std::boolalpha << admis << std::endl;
    return 0;
}