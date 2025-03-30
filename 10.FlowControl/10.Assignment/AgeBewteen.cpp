#include <iostream>


int main(){

    std::cout << "Print your age:" << std::endl;

    int age;
    std::cin >> age;

    if (age < 21){
        std::cout << "You are to young" << std:: endl;

    } 
    if (age >= 21){
        std::cout << "You are eligable for treatment" << std:: endl;
    }
    else {
        std::cout << "You are to old" << std:: endl;
        
    }

    return 0;
}