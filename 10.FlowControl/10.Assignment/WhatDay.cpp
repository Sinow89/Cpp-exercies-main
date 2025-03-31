#include <iostream>

int main(){

    std::cout << "Please input a date, 1 = Monday... 7 = Sunday." << std::endl;
    
    int condition{0};

    std::cin >> condition;   

    switch(condition){

    case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuseday" << std::endl;
        break;
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
    case 4:
        std::cout << "Thursday" << std::endl;
        break;
    case 5:
        std::cout << "Friday" << std::endl;
        break;
    case 6:
        std::cout << "Saturday" << std::endl;
        break;
    case 7:
        std::cout << "Saturday" << std::endl;
        break;
    default:
        std::cout << condition << ", is not a valid date" << std::endl;
    }

    return 1;
}