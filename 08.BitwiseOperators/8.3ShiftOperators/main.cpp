#include <iostream>
#include <bitset>

int main(){

    unsigned short int value {0xff0u};

    std::cout << "Size of short int " << sizeof(short int) <<  std::endl;//  16 bits
	
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;


    return 0;
}