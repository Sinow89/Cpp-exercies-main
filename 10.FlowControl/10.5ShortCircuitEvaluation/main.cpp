#include <iostream>

int main(){

    bool a{ true };
	bool b{ true };
	bool c{ true };
	bool d{ false };

	bool p{ false };
	bool q{ false };
	bool r{ false };
	bool m{ true };

	
	//AND : If one of the operands is 0, the result is 0
	std::cout << std::endl;
	std::cout << "AND short circuit" << std::endl;
	bool result = a && b && c && d;
	std::cout << "result : " << std::boolalpha << result << std::endl;

	//OR : If one of the operands is 1, the result is 1.
	std::cout << std::endl;
	std::cout << "OR short circuit" << std::endl;
	result = p || q || r || m;
	std::cout << "result : " << std::boolalpha << result << std::endl;

    return 0;
}