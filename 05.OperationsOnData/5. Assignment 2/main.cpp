#include <iostream>

int main(){
   
   float length;
   float width;
   float height;

std::cout << "Welcome to the box calculator. Please type in length, width and height information." << std::endl;
std:: cout << "Length : ", std::cin >> length;
std:: cout << "Width : ", std::cin >> width;
std:: cout << "Hieght : ", std::cin >> height;
float base = length * width;
std::cout << "The base area is : " << base << std::endl; 
std::cout << "The volume is : " << (base*height)  << std::endl; 

    return 0;
}