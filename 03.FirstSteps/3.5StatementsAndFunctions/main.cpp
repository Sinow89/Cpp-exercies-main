#include <iostream>

int addNumbers ( int first_param, int second_param){

    int result = first_param + second_param;
    return result;
    }

int main(){

    int first_number {13}; // Statment
    int second_number {7}; 


    std::cout << "First Number : " << first_number << std::endl;
    std::cout << "Second Number : " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; // Sum 20
 
    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers (35,54);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumbers (3,42) <<std::endl;

    return 0;
}