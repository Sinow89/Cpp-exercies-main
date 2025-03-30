#include <iostream>

int main(){

    std::cout << "Print your age:" << std::endl;

    int age;
    std::cin >> age;

    if (age <= 20){
        std::cout << "You are to young" << std:: endl;
    } 
    if(age > 39){
        std::cout << "You are to old" << std:: endl;
    }
    else if (age >= 21) {
        std::cout << "You are eligable for treatment" << std:: endl;
    }
    return 0;
}