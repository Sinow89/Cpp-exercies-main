#include <iostream>

int main(){

    int number;
    std::cout << "Enter an number to see if it's even or odd." << std::endl;
    std::cin >> number;

    if(number % 2 == 0){
        std::cout << "The number is even" << std::endl;
    }
    else{
        std::cout << "The number is odd" << std::endl;
    }
    return 0;
}