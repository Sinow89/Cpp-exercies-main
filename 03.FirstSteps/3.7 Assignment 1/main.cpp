#include <iostream>

#include<string>

int main(){

std::string countryname;

std::cout<<"Where do you live?"<<std::endl;

std::getline(std::cin,countryname);

std::cout<<"I've heard great things about" <<countryname<<". I'd like to go sometime."<<std::endl;

}